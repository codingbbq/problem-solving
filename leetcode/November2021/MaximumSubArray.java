// https://leetcode.com/problems/maximum-subarray/

// Using kadane's algorithm.
// We maintain the sum and max_sum values

public class MaximumSubArray {

    public static void main(String[] args) {
        int[] nums = {-2,1,-3,4,-1,2,1,-5,4};

        MaximumSubArray msa = new MaximumSubArray();
        int k = msa.maxSubArray(nums);
        System.out.println(k);
    }

    public int maxSubArray(int[] nums) {
        int sum = 0;
        int best_sum = Integer.MIN_VALUE;

        for(int i = 0; i < nums.length; i++) {
            sum = Math.max(nums[i], sum+nums[i]);
            best_sum = Math.max(sum, best_sum);
        }

        return best_sum;
    }

}
