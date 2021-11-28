// https://leetcode.com/problems/majority-element/

import java.util.HashMap;
import java.util.Map;

public class MajorityElement {

    public static void main(String[] args) {
        int[] nums = {3,2,3};

        MajorityElement me = new MajorityElement();
        int k = me.majorityElement(nums);
        System.out.println(k);
    }

    public int majorityElement(int[] nums) {

        // Use HashMap to keep track of frequency
        Map<Integer, Integer> elem = new HashMap<Integer, Integer>();
        int a = 0; // Store the element that has max freq
        int b = 0; // Store the count

        for(int i = 0; i < nums.length; i++) {
            if(elem.containsKey(nums[i])) {
                elem.put(nums[i], elem.get(nums[i]) + 1);
            } else {
                elem.put(nums[i], 1);
            }

            if(elem.get(nums[i]) > b) {
                b = elem.get(nums[i]);
                a = nums[i];
            }
        }

        return a;
    }

}
