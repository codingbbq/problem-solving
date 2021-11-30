// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class NumbersDisappeared {

    public static void main(String[] args) {
        int[] nums = {1,1};

        NumbersDisappeared nd = new NumbersDisappeared();
        List<Integer> output = nd.findDisappearedNumbers(nums);
        System.out.println(output);
    }

    public List<Integer> findDisappearedNumbers(int[] nums) {

        // First put the array in a map
        Map<Integer, Boolean> map = new HashMap<Integer, Boolean>();

        for(int i = 0; i < nums.length; i++) {
            map.put(nums[i], true);
        }

        // Loop through First n integers
        List<Integer> output = new ArrayList<Integer>();

        for(int i = 1; i <= nums.length; i++) {
            if(!map.containsKey(i)) {
                output.add(i);
            }
        }

        return output;
    }

}
