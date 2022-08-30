// https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3575/

import java.util.Arrays;

public class RemoveElementArr {
    public static void main(String[] args) {
        int[] nums = { 0,1,2,2,3,0,4,2 };
        int val = 2;
        RemoveElementArr re = new RemoveElementArr();
        int ans = re.removeElement(nums, val);
        System.out.println(ans);
        System.out.println(Arrays.toString(nums));
    }
    public int removeElement(int[] nums, int val) {
        int lastValidElement = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] != val) {
                nums[lastValidElement] = nums[i];
                lastValidElement++;
            }
        }
        return lastValidElement;
    }
}
