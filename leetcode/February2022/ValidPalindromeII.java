// https://leetcode.com/problems/valid-palindrome-ii/
// 680. Valid Palindrome II

public class ValidPalindromeII {
    public static void main(String[] args) {
        String s = "abca";
        ValidPalindromeII vp = new ValidPalindromeII();
        boolean ans = vp.validPalindrome(s);
        System.out.println(ans);
    }

    // Using recursion
    public boolean validPalindrome(String s) {
        char[] c = s.toCharArray();
        int i = 0;
        int j = s.length() - 1;
        while(i < j) {
            if(c[i] != c[j]) {
                return palindrome(c, i+1, j) || palindrome(c, i, j-1);
            }
            i++; j--;
        }
        return true;
    }

    static boolean palindrome(char[] chars, int i, int j) {
        while(i < j) {
            if(chars[i] != chars[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}
