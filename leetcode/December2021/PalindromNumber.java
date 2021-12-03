// https://leetcode.com/problems/palindrome-number/
// Did not solve on own, took help from solution

public class PalindromNumber {

    public static void main(String[] args) {
        int x = 12321;
        PalindromNumber pn = new PalindromNumber();
        boolean isPalindrome = pn.isPalindrome(x);
        System.out.println(isPalindrome);
    }

    public boolean isPalindrome(int x) {

        // If x is negative, return false because it cannot be palindrome
        if(x < 0 || (x%10 == 0 && x != 0)) return false;

        int revertedNumber = 0;
        while(x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }
        return x == revertedNumber || x == revertedNumber/10;
    }

}
