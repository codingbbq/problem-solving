// https://leetcode.com/problems/valid-palindrome/
// 125. Valid Palindrome

public class ValidPalindrome {
    public static void main(String[] args) {
        String s = "race a car";
        ValidPalindrome vp = new ValidPalindrome();
        boolean ans = vp.isPalindrome(s);
        System.out.println(ans);
    }
    public boolean isPalindrome(String s) {
        String p = "";
        for(int i = 0; i < s.length(); i++) {
            if(Character.isLetterOrDigit(s.charAt(i))){
                p += Character.toLowerCase(s.charAt(i));
            }
        }

        if(checkPalindrome(p)) {
            return true;
        }
        return false;
    }

    static boolean checkPalindrome(String check) {
        int start = 0;
        int end = check.length() - 1;

        while(start < end) {
            if(check.charAt(start) != check.charAt(end)) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
}
