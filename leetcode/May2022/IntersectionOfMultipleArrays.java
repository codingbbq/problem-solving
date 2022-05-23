// https://leetcode.com/problems/intersection-of-multiple-arrays/
// 2248. Intersection of Multiple Arrays

import java.util.*;

public class IntersectionOfMultipleArrays {
    public static void main(String[] args) {
        int[][] nums = { {3,1,2,4,5},{1,2,3,4},{3,4,5,6} };
        IntersectionOfMultipleArrays im = new IntersectionOfMultipleArrays();
        List<Integer> ans = im.intersection(nums);
        System.out.println(ans);
    }
    public List<Integer> intersection(int[][] nums) {

        // Read the constraints, this will help get the most optimal solution
        // Keep a count array and index being the number while its value being the frequency,
        // thus when you loop through the array, you will get it sorted.
        int[] count = new int[1001];
        int n = nums.length;
        for(int[] inner : nums) {
            for(int i : inner) {
                count[i]++;
            }
        }

        List<Integer> ans = new ArrayList<Integer>();
        for(int i = 0; i < count.length; i++) {
            if(count[i] == n) {
                ans.add(i);
            }
        }

        return ans;

        /*
        List<Integer> ans = new ArrayList<Integer>();

        // Use a hashmap to store the frequency and return the key whose value is equal to array length
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        int n = nums.length;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < nums[i].length; j++) {
                map.put(nums[i][j], map.getOrDefault(nums[i][j], 0) + 1);
            }
        }

        // Loop through the map
        for(Map.Entry<Integer, Integer> x : map.entrySet()) {
            if(x.getValue() == n) {
                ans.add(x.getKey());
            }
        }
        Collections.sort(ans);
        return ans;
        */
    }
}
