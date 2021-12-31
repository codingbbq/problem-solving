// https://leetcode.com/problems/two-sum/

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class TwoSumProblem {

    public static void main(String[] args) {
        int[] n = {3,2,4};
        int target = 6;
        TwoSumProblem ts = new TwoSumProblem();
        int[] ans = ts.twoSum(n, target);
        System.out.println(Arrays.toString(ans));
    }

    public int[] twoSum(int[] nums, int target) {
//        for(int i = 0; i < nums.length; i++) {
//            for(int j = i+1; j < nums.length; j++) {
//                if(nums[i] + nums[j] == target) {
//                    return new int[] {i, j};
//                }
//            }
//        }
//        return null;

        // Using HashMap

        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if(map.containsKey(complement) && map.get(complement) != i) {
                return new int[] {i, map.get(complement)};
            }
            map.put(nums[i], i);
        }
        return null;
    }

}
