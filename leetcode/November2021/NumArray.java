// https://leetcode.com/problems/range-sum-query-immutable/

import java.util.Arrays;

class NumArray {
    int[] nums;

    public NumArray(int[] nums) {
        this.nums = nums;
        int sum = 0;
        for(int i = 0; i < nums.length; i++) {
            sum+=nums[i];
            nums[i] = sum;
        }
        System.out.println(Arrays.toString(nums));
    }

    public static void main(String[] args) {
        int[] nums = {-2, 0, 3, -5, 2, -1};
        NumArray na = new NumArray(nums);
        int sum = na.sumRange(0, 5);
        System.out.println(sum);
    }

    public int sumRange(int left, int right) {
        if(left == 0) {
            return nums[right];
        } else {
            return nums[right] - nums[left - 1];
        }

    }
}