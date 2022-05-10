/*
https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
2160. Minimum Sum of Four Digit Number After Splitting Digits
*/

import java.util.Arrays;

public class MinimumSumFourDigtNumber {
    public static void main(String[] args) {
        int num = 4009;
        MinimumSumFourDigtNumber ms = new MinimumSumFourDigtNumber();
        int ans = ms.minimumSum(num);
        System.out.println(ans);
    }
    public int minimumSum(int num) {
        // Convert the num into array
        int[] numArray = new int[4];
        for(int i = 0; i < 4; i++) {
            numArray[i] = num % 10;
            num = num / 10;
        }
        Arrays.sort(numArray);
        return (((numArray[0] * 10) + numArray[3]) + ((numArray[1] * 10) + numArray[2]));
    }
}
