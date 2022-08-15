// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/

import java.util.Arrays;

public class SquareOfSortedArray {
    public static void main(String args[]) {
        int[] nums = { -4,-1,0,3,10 };
        SquareOfSortedArray sa = new SquareOfSortedArray();
        int[] ans = sa.sortedSquares(nums);
        System.out.println(Arrays.toString(ans));
    }
    public int[] sortedSquares(int[] nums) {

        // Two pointer approach, store the new sorted array in a new res array
        int[] res = new int[nums.length];
        int l = 0;
        int r = nums.length - 1;
        int index = nums.length - 1;

        while(l <= r) {
            if(Math.abs(nums[l]) < Math.abs(nums[r])) {
                res[index--] = nums[r] * nums[r];
                r--;
            } else {
                res[index--] = nums[l] * nums[l];
                l++;
            }
        }
        return res;
    }
}
