// https://leetcode.com/problems/valid-anagram/
// 242. Valid Anagram

import java.util.Arrays;

public class ValidAnagram {
    public static void main(String[] args) {
        String s = "rat";
        String t = "tar";
        ValidAnagram va = new ValidAnagram();
        boolean ans = va.isAnagram(s, t);
        System.out.println(ans);
    }
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) return false;
        char[] sChar = s.toCharArray();
        Arrays.sort(sChar);
        char[] tChar = t.toCharArray();
        Arrays.sort(tChar);
        for(int i = 0; i < sChar.length; i++) {
            if(sChar[i] != tChar[i]) return false;
        }
        return true;
    }
}
