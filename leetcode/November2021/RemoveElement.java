// https://leetcode.com/problems/remove-element/

import java.util.Arrays;

public class RemoveElement {

    public static void main(String[] args) {

        int[] nums = {1,3,2,3};
        int val = 3;

        RemoveElement re = new RemoveElement();
        int k = re.removeElement(nums, val);
        System.out.println(k);
    }

    public int removeElement(int[] nums, int val) {
        int i = 0;

        for(int j = 0; j < nums.length; j++) {
            if(nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        // System.out.println(Arrays.toString(nums));
        return i;
    }

}
