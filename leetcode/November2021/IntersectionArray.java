// https://leetcode.com/problems/intersection-of-two-arrays/

import java.util.*;

public class IntersectionArray {

    public static void main(String[] args) {
        int[] nums1 = {4,9,5};
        int[] nums2 = {9,4,9,8,4};

        IntersectionArray isa = new IntersectionArray();
        int[] a = isa.intersection(nums1, nums2);
        System.out.println(Arrays.toString(a));
    }

    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set1 = new HashSet<Integer>();
        for(int n1 : nums1) {
            set1.add(n1);
        }

        Set<Integer> set2 = new HashSet<Integer>();
        for(int n2 : nums2) {
            set2.add(n2);
        }

        if(set1.size() > set2.size()) {
            return find_intersection(set1, set2);
        } else {
            return find_intersection(set2, set1);
        }
    }

    public int[] find_intersection(Set<Integer> big, Set<Integer> small) {

        int[] finalArray = new int[small.size()];
        int idx = 0;
        for(int x : small) {
            if(big.contains(x)) {
                finalArray[idx] = x;
                idx++;
            }
        }
        // Reset the array to the required length.
        int[] a = Arrays.copyOf(finalArray, idx);

        return a;
    }
}
