// https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3248/
// Remove Duplicates from Sorted Array

import java.util.Arrays;

public class RemoveDupFromSorted {
    public static void main(String[] args) {
        int[] nums = { 0,0,1,1,1,2,2,3,3,4 };
        RemoveDupFromSorted rd = new RemoveDupFromSorted();
        int ans = rd.removeDuplicates(nums);
        System.out.println(ans);
        System.out.println(Arrays.toString(nums));
    }
    public int removeDuplicates(int[] nums) {
        int i = 0;
        for(int j = 1; j < nums.length; j++) {
            if(nums[i] != nums[j]) {
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
}
