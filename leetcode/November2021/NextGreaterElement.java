// https://leetcode.com/problems/next-greater-element-i/

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class NextGreaterElement {

    public static void main(String[] args) {
        int[] nums1 = {1,3,5,2,4};
        int[] nums2 = {6,5,4,3,2,1,7};

        NextGreaterElement nge = new NextGreaterElement();
        int[] output = nge.nextGreaterElement(nums1, nums2);
        System.out.println(Arrays.toString(output));
    }

    public int[] nextGreaterElement(int[] nums1, int[] nums2) {

        // First store the key and its index in a map for nums2 array.
        Map<Integer, Integer> n2 = new HashMap<Integer, Integer>();
        for(int i = 0; i < nums2.length; i++) {
            n2.put(nums2[i], i);
        }

        // loop through elements in the first array and find the index in map.
        // Use this index + 1 to get the next greater element.
        int[] output = new int[nums1.length];
        for(int i = 0; i < nums1.length; i++) {
            if(n2.containsKey(nums1[i])) {

                int startIndex = n2.get(nums1[i]) + 1;
                boolean found = false;
                for(int k = startIndex; k < nums2.length; k++) {
                    if(nums2[k] > nums1[i]) {
                        output[i] = nums2[k];
                        found = true;
                        break;
                    }
                }

                if(!found) {
                    output[i] = -1;
                }

            } else {
                output[i] = -1;
            }
        }

        return output;

    }

}
