// https://leetcode.com/problems/contains-duplicate-ii/

import java.util.HashMap;
import java.util.Map;

public class ContainsDuplicate2 {

    public static void main(String[] args) {
        int[] nums = {1,2,3,1,2,3};
        int k = 2;
        ContainsDuplicate2 cd = new ContainsDuplicate2();
        boolean q = cd.containsNearbyDuplicate(nums, k);

        System.out.println(q);
    }

    public boolean containsNearbyDuplicate(int[] nums, int k) {

        Map<Integer, Integer> arr = new HashMap<Integer, Integer>();

        for(int i = 0; i < nums.length; i++) {
            if(arr.containsKey(nums[i])) {
                if(Math.abs(arr.get(nums[i]) - i) <= k) {
                    return true;
                } else {
                    // Update the index
                    arr.put(nums[i], i);
                }
            } else {
                arr.put(nums[i], i);
            }
        }

        return false;

    }
}
