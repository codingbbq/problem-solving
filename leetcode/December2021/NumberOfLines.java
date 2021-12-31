// https://leetcode.com/problems/number-of-lines-to-write-string/
// 806. Number of Lines To Write String

import java.util.Arrays;

public class NumberOfLines {
    public static void main(String[] args) {
        int[] widths = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
        String s = "abcdefghijklmnopqrstuvwxyz";
        NumberOfLines nl = new NumberOfLines();
        int[] ans = nl.numberOfLines(widths, s);
        System.out.println(Arrays.toString(ans));
    }
    public int[] numberOfLines(int[] widths, String s) {
        int lines = 1;
        int total = 0;
        for(int i = 0; i < s.length(); i++) {
            total += widths[s.charAt(i) - 97];
            // Reset if 100 pixels are crossed.
            if(total > 100) {
                total = widths[s.charAt(i) - 97];
                lines++;
            }
        }
        return new int[] {lines, total};
    }
}
