// https://leetcode.com/problems/intersection-of-two-arrays-ii/

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class IntersectionTwoArray {

    public static void main(String[] args) {
        int[] nums1 = {4,9,5};
        int[] nums2 = {9,4,9,8,4};

        IntersectionTwoArray ita = new IntersectionTwoArray();
        int[] output = ita.intersect(nums1, nums2);
        System.out.println(Arrays.toString(output));
    }


    public int[] intersect(int[] nums1, int[] nums2) {

        // Loop through nums1
        Map<Integer, Integer> map1 = new HashMap<Integer, Integer>();
        for(int i = 0; i < nums1.length; i++) {
            if(map1.containsKey(nums1[i])) {
                map1.put(nums1[i], map1.get(nums1[i])+1);
            } else {
                map1.put(nums1[i], 1);
            }
        }

        // Loop through nums2
        Map<Integer, Integer> map2 = new HashMap<Integer, Integer>();
        for(int i = 0; i < nums2.length; i++) {
            if(map2.containsKey(nums2[i])) {
                map2.put(nums2[i], map2.get(nums2[i])+1);
            } else {
                map2.put(nums2[i], 1);
            }
        }

        if(map1.size() > map2.size()) {
            return getIntersection(map1, map2);
        } else {
            return getIntersection(map2, map1);
        }
    }

    public int[] getIntersection(Map<Integer, Integer> big, Map<Integer, Integer> small) {

        int[] output = new int[big.size() + small.size()];
        int idx = 0;

        // Loop through the small map
        for(Map.Entry<Integer, Integer> entry : small.entrySet()) {

            // Check in the big map if the key is present
            if(big.containsKey(entry.getKey())) {

                // Find the smallest of frequency and loop through to add it to output array.
                int freq = Math.min(entry.getValue(), big.get(entry.getKey()));
                for(int i = 0; i < freq; i++) {
                    output[idx] = entry.getKey();
                    idx++;
                }

            }
        }

        // Remove the excess elements from the array. Only copy the first idx elements
        int[] finaloutput = Arrays.copyOf(output, idx);

        return finaloutput;

    }

}
