// https://leetcode.com/problems/sort-array-by-parity-ii/
// 922. Sort Array By Parity II

import java.util.Arrays;

public class SortArrayOnParity {
    public static void main(String[] args) {
        int[] nums = {4,2,5,7};
        SortArrayOnParity sp = new SortArrayOnParity();
        int[] ans = sp.sortArrayByParityII(nums);
        System.out.println(Arrays.toString(ans));
    }
    public int[] sortArrayByParityII(int[] nums) {
        int[] ans = new int[nums.length];
        int even = 0;
        int odd = 1;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i]%2==0) {
                ans[even] = nums[i];
                even += 2;
            } else {
                ans[odd] = nums[i];
                odd += 2;
            }
        }
        return  ans;
    }
}
