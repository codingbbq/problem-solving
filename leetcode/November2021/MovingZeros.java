// https://leetcode.com/problems/move-zeroes/

import java.util.Arrays;

public class MovingZeros {

    public static void main(String[] args) {
        int[] nums = {0,1,0,3,12};
        MovingZeros mz = new MovingZeros();
        mz.moveZeroes(nums);
    }

    public void moveZeroes(int[] nums) {

        int indexNonZero = 0;

        // First get all non zero together
        for(int i = 0; i < nums.length; i++) {
                if(nums[i] != 0) {
                    nums[indexNonZero] = nums[i];
                    indexNonZero++;
                }
        }

        // Now fill the entire remaining array with zero
        for(int i = indexNonZero; i < nums.length; i++) {
            nums[i] = 0;
        }

        System.out.println(Arrays.toString(nums));
    }

}
