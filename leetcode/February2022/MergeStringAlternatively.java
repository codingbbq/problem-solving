// https://leetcode.com/problems/merge-strings-alternately/
// 1768. Merge Strings Alternately

public class MergeStringAlternatively {
    public static void main(String[] args) {
        String word1 = "ab";
        String word2 = "pqrs";
        MergeStringAlternatively ma = new MergeStringAlternatively();
        String ans = ma.mergeAlternately(word1, word2);
        System.out.println(ans);
    }
    public String mergeAlternately(String word1, String word2) {
        int req = word1.length() + word2.length();
        String ans = "";
        int i = 0;
        int j = 0;
        while(ans.length() < req) {
            if(i < word1.length()) {
                ans += word1.charAt(i);
                i++;
            }
            if(j < word2.length()) {
                ans += word2.charAt(j);
                j++;
            }
        }
        return ans;
    }
}
