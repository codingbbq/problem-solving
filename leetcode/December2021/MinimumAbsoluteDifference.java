// https://leetcode.com/problems/minimum-absolute-difference/
// 1200. Minimum Absolute Difference

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class MinimumAbsoluteDifference {
    public static void main(String[] args) {
        int[] arr = {40,11,26,27,-20};
        MinimumAbsoluteDifference md = new MinimumAbsoluteDifference();
        List<List<Integer>> ans = md.minimumAbsDifference(arr);
        System.out.println(ans);
    }
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        List<List<Integer>> ans = new ArrayList<>();
        Arrays.sort(arr);
        // To find the minimum value between two numbers;
        int min = Math.abs(arr[1] - arr[0]);
        // To find the pairs
        for(int i = 1; i < arr.length; i++) {
            if(Math.abs(arr[i] - arr[i-1]) == min) {
                ans = addElements(false, ans, arr[i-1], arr[i]);
            }
            if(Math.abs(arr[i-1] - arr[i]) < min) {
                min = Math.abs(arr[i-1] - arr[i]);
                ans = addElements(true, ans, arr[i-1], arr[i]);
            }
        }
        return ans;
    }
    public static List<List<Integer>> addElements(boolean discard, List<List<Integer>> ans, int first, int second) {
        if(discard) {
            ans = new ArrayList<>();
        }
        List<Integer> temp = new ArrayList<>();
        temp.add(first);
        temp.add(second);
        ans.add(temp);
        return ans;
    }
}
