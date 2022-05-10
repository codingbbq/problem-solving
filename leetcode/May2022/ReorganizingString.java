// https://leetcode.com/problems/reorganize-string/
// 767. Reorganize String

public class ReorganizingString {
    public static void main(String[] args) {
        String s = "aab";
        ReorganizingString rs = new ReorganizingString();
        String ans = rs.reorganizeString(s);
        System.out.println(ans);
    }

    public String reorganizeString(String s) {
        // Code that stores the frequency of the alphabets
        int[] hash = new int[26];
        for(int i = 0; i < s.length(); i++) {
            hash[s.charAt(i) - 'a']++;
        }

        // Find the maximum frequency and the letter
        int max = 0; // frequency
        int letter = 0; // 0 is a, 1 is b and so on
        for(int i = 0; i < hash.length; i++) {
            if(hash[i] > max) {
                max = hash[i];
                letter = i;
            }
        }

        // Check for negative case
        if(max > (s.length() + 1)/2) {
            return "";
        }

        // Create a char array
        // Store the max count letter alternatively,
        // fill the empty space with remaining letters.
        char[] res = new char[s.length()];
        int idx = 0;
        while(hash[letter] > 0) {
            res[idx] = (char) (letter + 'a');
            idx+=2;
            hash[letter]--;
        }
        // insert the remaining characters
        for(int i = 0; i < hash.length; i++) {
            while(hash[i] > 0) {
                if(idx >= res.length) {
                    idx = 1;
                }

                res[idx] = (char) (i + 'a');
                idx+=2;
                hash[i]--;
            }
        }
        return String.valueOf(res);
    }
}