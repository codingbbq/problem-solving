// https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
// 1827. Minimum Operations to Make the Array Increasing

import java.util.Arrays;

public class ArrayIncreasing {
    public static void main(String[] args) {
        int[] nums = {1,5,2,4,1};
        ArrayIncreasing ai = new ArrayIncreasing();
        int answer = ai.minOperations(nums);
        System.out.println(answer);
    }
    public int minOperations(int[] nums) {
        int operations = 0;
        for(int i = 0; i < nums.length-1; i++) {
            if(nums[i] >= nums[i+1]) {
                int next = nums[i+1]+(nums[i]-nums[i+1])+1;
                operations+=(nums[i]-nums[i+1])+1;
                nums[i+1] = next;
            }
        }
        // System.out.println(Arrays.toString(nums));
        return operations;
    }
}
