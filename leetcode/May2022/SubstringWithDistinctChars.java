// https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
// 1876. Substrings of Size Three with Distinct Characters

public class SubstringWithDistinctChars {
    public static void main(String[] args) {
        String s = "aababcabc";
        SubstringWithDistinctChars sc = new SubstringWithDistinctChars();
        int count = sc.countGoodSubstrings(s);
        System.out.println(count);
    }
    public int countGoodSubstrings(String s) {
        int count = 0;
        for(int i = 0; i < s.length() - 2; i++) {
            if(s.charAt(i) != s.charAt(i+1) && s.charAt(i) != s.charAt(i+2) && s.charAt(i+1) != s.charAt(i+2)) {
                count++;
            }
        }
        return count;
    }
}
