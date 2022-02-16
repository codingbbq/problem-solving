// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
// 2108. Find First Palindromic String in the Array

public class FindFirstPalindrome {
    public static void main(String[] args) {
        String[] words = {"abc","car","ada","racecar","cool"};
        FindFirstPalindrome fp = new FindFirstPalindrome();
        String ans = fp.firstPalindrome(words);
        System.out.println(ans);
    }
    public String firstPalindrome(String[] words) {
        for(String x : words) {
            if(isPalindrom(x)) {
                return x;
            }
        }
        return "";
    }
    static boolean isPalindrom(String check) {
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

