// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
// 1356. Sort Integers by The Number of 1 Bits

import java.util.*;

public class SortByNumberOfOneBits {
    public static void main(String[] args) {
        int[] arr = {0,1,2,3,4,5,6,7,8};
        SortByNumberOfOneBits sb = new SortByNumberOfOneBits();
        int[] ans = sb.sortByBits(arr);
        System.out.println(Arrays.toString(ans));
    }
    // Using Brian Karnighan's algorithm, count the set bits
    public static int getCount(int n) {
        int count = 0;
        while(n > 0) {
            n = n & (n-1);
            count++;
        }
        return count;
    }
    public int[] sortByBits(int[] arr) {
        int N = arr.length;
        Map<Integer, List<Integer>> tracker = new HashMap<Integer, List<Integer>>();
        // Sort the input array, this will help in inserting in the list in the right order.
        Arrays.sort(arr);

        for(int i = 0; i < N; i++) {
            // Get the bit counts
            int bitcount = getCount(arr[i]);
            // Against each bit count, store the list of all the numbers.
            if(tracker.containsKey(bitcount)) {
                List<Integer> tempList = tracker.get(bitcount);
                tempList.add(arr[i]);
                tracker.put(bitcount, tempList);
            } else {
                List<Integer> tempList = new ArrayList<Integer>();
                tempList.add(arr[i]);
                tracker.put(bitcount,tempList);
            }
        }

        List<Integer> output = new ArrayList<Integer>();
        // Assuming that the max bit count will be 100
        for(int i = 0; i < 100; i++) {
            List<Integer> finalList = tracker.get(i);
            if(finalList != null) output.addAll(finalList);
        }

        // Converting list to array.
        int[] ans = new int[N];
        for(int i = 0; i < output.size(); i++) {
            ans[i] = output.get(i);
        }
        return ans;

    }
}
