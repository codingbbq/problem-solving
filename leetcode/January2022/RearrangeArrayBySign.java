// https://leetcode.com/problems/rearrange-array-elements-by-sign/
// 2149. Rearrange Array Elements by Sign

import java.util.Arrays;

public class RearrangeArrayBySign {
    public static void main(String[] args) {
        int[] nums = {3,1,-2,-5,2,-4};
        RearrangeArrayBySign ra = new RearrangeArrayBySign();
        int[] ans = ra.rearrangeArray(nums);
        System.out.println(Arrays.toString(ans));
    }
    public int[] rearrangeArray(int[] nums) {
        int even = 0;
        int odd = 1;
        int[] ans = new int[nums.length];
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] > 0) {
                ans[even] = nums[i];
                even += 2;
            } else {
                ans[odd] = nums[i];
                odd += 2;
            }
        }
        return ans;
    }
}
