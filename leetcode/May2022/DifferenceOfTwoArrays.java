// https://leetcode.com/problems/find-the-difference-of-two-arrays/
// 2215. Find the Difference of Two Arrays

import java.util.*;

public class DifferenceOfTwoArrays {
    public static void main(String[] args) {
        int[] nums1 = { -3,6,-5,4,5,5 };
        int[] nums2 = { 6,6,-3,-3,3,5 };
        DifferenceOfTwoArrays da = new DifferenceOfTwoArrays();
        List<List<Integer>> ans = da.findDifference(nums1, nums2);
        System.out.println(ans);
    }
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> one = new ArrayList<>();


        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        // Loop through the first nums1 array and store its frequency in a hashmap.
        for(int i = 0; i < nums1.length; i++) {
            map.put(nums1[i], map.getOrDefault(nums1[i], 0)+1);
        }

        // Loop through the second nums2 array and check if the items exists
        // Also put the nums2 items in a set so that all duplicates are eliminated
        Set<Integer> nums2set = new HashSet<>();
        for(int i = 0; i < nums2.length; i++) {
            if(map.containsKey(nums2[i])) {
             // So the value is present in the nums1 array,
             map.put(nums2[i], 0);
            } else {
                nums2set.add(nums2[i]);
            }
        }

        // Loop through the map and then add all the items that has freq other than 0;
        for(Map.Entry<Integer, Integer> x : map.entrySet()) {
            if(x.getValue() > 0) {
               one.add(x.getKey());
            }
        }

        List<Integer> two = new ArrayList<>(nums2set);

        ans.add(0, one);
        ans.add(1, two);

        return ans;
    }
}
