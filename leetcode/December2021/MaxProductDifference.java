// https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
// 1913. Maximum Product Difference Between Two Pairs

import java.util.Arrays;

public class MaxProductDifference {
    public static void main(String[] args) {
        int[] nums = {4,2,5,9,7,4,8};
        MaxProductDifference mp = new MaxProductDifference();
        int answer = mp.maxProductDifference(nums);
        System.out.println(answer);
    }

    public int maxProductDifference(int[] nums) {
        // Sort the array
        Arrays.sort(nums);
        int answer = (nums[nums.length - 1] * nums[nums.length - 2]) - (nums[0] * nums[1]);
        return answer;
    }
}
