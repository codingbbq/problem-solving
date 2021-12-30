// https://leetcode.com/problems/sort-array-by-increasing-frequency/
// 1636. Sort Array by Increasing Frequency

import java.util.*;

public class SortByFrequency {
    public static void main(String[] args) {
        int[] nums = {1,1,2,2,2,3};
        SortByFrequency sf = new SortByFrequency();
        int[] ans = sf.frequencySort(nums);
        System.out.println(Arrays.toString(ans));
    }
    public int[] frequencySort(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        for(int i : nums) map.put(i, map.getOrDefault(i, 0) + 1);

        int[] arr = new int[2];
        Queue<int[]> pq = new PriorityQueue<>((a, b) -> {
            if(a[1] == b[1])
                return b[0] - a[0];
            return a[1] - b[1];
        });

        for(int key : map.keySet())
            pq.offer(new int[] {key, map.get(key)});

        int i = 0;
        while(!pq.isEmpty()) {
            arr = pq.poll();
            for(int j=0; j<arr[1]; j++)
                nums[i++] = arr[0];
        }

        return nums;
    }
}
