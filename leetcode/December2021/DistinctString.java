// https://leetcode.com/problems/kth-distinct-string-in-an-array/
// 2053. Kth Distinct String in an Array

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class DistinctString {
    public static void main(String[] args) {
        String[] arr = {"d","b","c","b","c","a"};
        int k = 2;
        DistinctString ds = new DistinctString();
        String ans = ds.kthDistinct(arr, k);
        System.out.println(ans);
    }
    public String kthDistinct(String[] arr, int k) {
        Map<String, Integer> freq = new HashMap<String, Integer>();
        for(String x : arr) {
            freq.put(x, freq.getOrDefault(x, 0)+1);
        }
        int count = 0;
        String ans = "";
        for(String x : arr) {
            if(freq.get(x) == 1) {
                count++;
            }
            if(count == k) {
                return x;
            }
        }
        return ans;
    }
}
