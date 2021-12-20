// https://leetcode.com/problems/build-array-from-permutation/
// 1920. Build Array from Permutation

import java.util.Arrays;

public class BuildArray {
    public static void main(String[] args) {
        int[] nums = {0,2,1,5,3,4};
        BuildArray ba = new BuildArray();
        int[] ans = ba.buildArray(nums);
        System.out.println(Arrays.toString(ans));
    }
    public int[] buildArray(int[] nums) {
        int N = nums.length;
        int[] ans = new int[N];
        for(int i = 0; i < N; i++) {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
}
