// https://leetcode.com/problems/remove-palindromic-subsequences/
// 1332. Remove Palindromic Subsequences

public class RemovePalindromeSubsequence {
    public static void main(String[] args) {
        String s = "ababaa";
        RemovePalindromeSubsequence rs = new RemovePalindromeSubsequence();
        int ans = rs.removePalindromeSub(s);
        System.out.println(ans);
    }
    public int removePalindromeSub(String s) {
        int n = s.length();
        if(n == 0) {
            return 0;
        }
        int start = 0;
        int end = n - 1;
        while(start <= end) {
            if(s.charAt(start) != s.charAt(end)) {
                return 2; // Not a palindrome, so delete all a's followed by all b's
            }
            start++;
            end--;
        }
        return 1; // Completed while loop and reached here, so it is palindrome
    }
}
