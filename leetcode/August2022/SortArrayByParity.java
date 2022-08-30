// https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3260/

import java.util.Arrays;

public class SortArrayByParity {
    public static void main(String[] args) {
        int[] nums = { 3,1,2,4 };
        SortArrayByParity sp = new SortArrayByParity();
        int[] ans = sp.sortArrayByParity(nums);
        System.out.println(Arrays.toString(ans));
    }

    public int[] sortArrayByParity(int[] nums) {
        int lastEvenIndex = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] % 2 == 0) {
                int temp = nums[lastEvenIndex];
                nums[lastEvenIndex] = nums[i];
                nums[i] = temp;
                lastEvenIndex++;
            }
        }
        return nums;
    }
}
