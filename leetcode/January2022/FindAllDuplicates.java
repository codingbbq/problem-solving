// https://leetcode.com/problems/find-all-duplicates-in-an-array/
// 442. Find All Duplicates in an Array

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class FindAllDuplicates {
    public static void main(String[] args) {
        int[] nums = {4,3,2,7,8,2,3,1};
        FindAllDuplicates fd = new FindAllDuplicates();
        List<Integer> ans = fd.findDuplicates(nums);
        System.out.println(ans);
    }
    public List<Integer> findDuplicates(int[] nums) {
//        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
//        for(int x : nums) {
//            map.put(x, map.getOrDefault(x, 0)+1);
//        }
//        List<Integer> ans = new ArrayList<Integer>();
//        for(Map.Entry<Integer, Integer> x : map.entrySet()) {
//            if(x.getValue() > 1) {
//                ans.add(x.getKey());
//            }
//        }
//        return ans;

        List<Integer> ans = new ArrayList<Integer>();
        for(int i = 0; i < nums.length; i++) {
            int n = Math.abs(nums[i]) - 1;
            if(nums[n] < 0) {
                ans.add(n+1);
            } else {
                nums[n] = -nums[n];
            }
        }
        return ans;
    }
}
