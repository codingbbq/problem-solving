// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
// 1877. Minimize Maximum Pair Sum in Array1877. Minimize Maximum Pair Sum in Array

import java.util.Arrays;

public class MinMaxPairSum {
    public static void main(String[] args) {
        int[] nums = {3,5,2,3};
        MinMaxPairSum ms = new MinMaxPairSum();
        int ans = ms.minPairSum(nums);
        System.out.println(ans);
    }
    public int minPairSum(int[] nums) {
        int N = nums.length;
        Arrays.sort(nums);
        System.out.println(Arrays.toString(nums));
        int M = 0;
        for(int i = 0; i < N/2; i++) {
            M = Math.max(M, nums[i] + nums[N-1-i]);
        }
        return M;
    }
}
