// https://leetcode.com/problems/array-partition-i/

import java.util.Arrays;

public class ArrayPartition {

    public static void main(String[] args) {
        int[] nums = {6,2,6,5,1,2};
        ArrayPartition ap = new ArrayPartition();
        int sum = ap.arrayPairSum(nums);
        System.out.println(sum);
    }

    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        int sum = 0;

        // After sorting array, optimal pairs will be every 2 consecutive integers.
        // Also every alternate number will be minimum.
        for(int i = 0; i < nums.length; i=i+2) {
            sum+=nums[i];
        }
        return sum;
    }

}
