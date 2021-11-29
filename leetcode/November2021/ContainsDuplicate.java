// https://leetcode.com/problems/contains-duplicate/

import java.util.HashMap;
import java.util.Map;

public class ContainsDuplicate {

    public static void main(String[] args) {
        int[] nums = {1,2,3,4};

        ContainsDuplicate cd = new ContainsDuplicate();
        boolean q = cd.containsDuplicate(nums);
        System.out.println(q);
    }

    public boolean containsDuplicate(int[] nums) {
        Map<Integer, Boolean> dup = new HashMap<>();

        for(int i = 0; i < nums.length; i++) {
            if(dup.containsKey(nums[i])) {
                return true;
            } else {
                dup.put(nums[i], true);
            }
        }

        return false;
    }

}
