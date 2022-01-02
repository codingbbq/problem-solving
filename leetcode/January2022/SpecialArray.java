// https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/
// 1608. Special Array With X Elements Greater Than or Equal X

import java.util.HashMap;
import java.util.Map;

public class SpecialArray {
    public static void main(String[] args) {
        int[] nums = {3,5};
        SpecialArray sa = new SpecialArray();
        int ans = sa.specialArray(nums);
        System.out.println(ans);
    }
    public int specialArray(int[] nums) {
        for(int x = 0; x <= nums.length; x++) {
            int count = 0;
            for(int i = 0; i < nums.length; i++) {
                if(nums[i] >= x) {
                    count++;
                }
            }
            if(count == x) {
                return count;
            }
        }

        return -1;
    }
}
