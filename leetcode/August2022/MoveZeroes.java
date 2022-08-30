// https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3157/

import java.util.Arrays;

public class MoveZeroes {
    public static void main(String[] args) {
        int[] nums = { 0,1,0,3,12 };
        MoveZeroes mz = new MoveZeroes();
        mz.moveZeroes(nums);
        System.out.println(Arrays.toString(nums));
    }

    public void moveZeroes(int[] nums) {
        // lastNonZeroFoundAt pointer keeps track of the non zero element position
        for(int lastNonZeroFoundAt = 0, curr = 0; curr < nums.length; curr++) {
            if(nums[curr] != 0) {
                // Swapping
                int temp = nums[lastNonZeroFoundAt];
                nums[lastNonZeroFoundAt++] = nums[curr];
                nums[curr] = temp;
            }
        }
    }
}
