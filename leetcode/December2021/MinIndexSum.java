// https://leetcode.com/problems/minimum-index-sum-of-two-lists/

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class MinIndexSum {

    public static void main(String[] args) {
        String[] list1 = {"Shogun","Tapioca Express","Burger King","KFC"};
        String[] list2 = {"KFC","Shogun","Burger King"};

        MinIndexSum mis = new MinIndexSum();
        String[] output = mis.findRestaurant(list1, list2);
        System.out.println(Arrays.toString(output));
    }


    public String[] findRestaurant(String[] list1, String[] list2) {
        Map<String, Integer> list = new HashMap<String, Integer>();
        Map<String, Integer> output = new HashMap<String, Integer>();

        for(int i = 0; i < list1.length; i++) {
            list.put(list1[i], i);
        }

        // Keep track of indexSum
        int indexSum = Integer.MAX_VALUE;

        // Loop through the second list
        for(int j = 0; j < list2.length; j++) {

            // Found a common Restaurant
            if(list.containsKey(list2[j])) {

                int k = j + list.get(list2[j]);
                indexSum = Math.min(indexSum, k);
                output.put(list2[j], k);

            }

        }

        // Loop through output map and return the array with all the values that are equal to indexSum
        String[] rest = new String[output.size()];
        int i = 0;
        for(Map.Entry<String, Integer> entry : output.entrySet()) {
            if(entry.getValue() == indexSum) {
                rest[i++] = entry.getKey();
            }
        }

        return Arrays.copyOf(rest, i);

    }
}
