// https://leetcode.com/problems/longest-harmonious-subsequence/

import java.util.HashMap;
import java.util.Map;

public class HarmoniousSubsequence {

    public static void main(String[] args) {
        int[] nums = {1,3,2,2,5,2,3,7};
        HarmoniousSubsequence hs = new HarmoniousSubsequence();
        int k = hs.findLHS(nums);
        System.out.println(k);
    }

    public int findLHS(int[] nums) {
        // Use a hashmap to store the key and the count
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        for(int i = 0; i < nums.length; i++) {
            if(map.containsKey(nums[i])) {
                map.put(nums[i], map.get(nums[i])+1);
            } else {
                map.put(nums[i], 1);
            }
        }

        int k = 0;
        for(int x : map.keySet()) {
            if(map.containsKey(x+1)) {
                k = Math.max(k, map.get(x) + map.get(x+1));
            }
        }

        return k;
    }

}
