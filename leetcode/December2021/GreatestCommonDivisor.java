// https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// 1979. Find Greatest Common Divisor of Array

import java.util.Arrays;

public class GreatestCommonDivisor {
    public static void main(String[] args) {
        int[] nums = {7,5,6,8,3};
        GreatestCommonDivisor gcd = new GreatestCommonDivisor();
        int answer = gcd.findGCD(nums);
        System.out.println(answer);
    }
    public int findGCD(int[] nums) {
        Arrays.sort(nums);
        return gcd(nums[0], nums[nums.length-1]);
    }
    // Recursive function to return gcd of a and b
    static int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
}
