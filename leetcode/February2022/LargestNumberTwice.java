// https://leetcode.com/problems/largest-number-at-least-twice-of-others/
// 747. Largest Number At Least Twice of Others

import java.util.Arrays;

public class LargestNumberTwice {
    public static void main(String[] args) {
        int[] nums = {3,6,1,0};
        LargestNumberTwice lt = new LargestNumberTwice();
        int ans = lt.dominantIndex(nums);
        System.out.println(ans);
    }
    public int dominantIndex(int[] nums) {
        int maxIndex = 0;
        int m = nums[0];
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] > m) {
                m = nums[i];
                maxIndex = i;
            }
        }
        for(int i = 0; i < nums.length; i++) {
            if(i != maxIndex && m < nums[i]*2) return -1;
        }
        return maxIndex;
    }
}
