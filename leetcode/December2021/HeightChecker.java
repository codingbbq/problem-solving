// https://leetcode.com/problems/height-checker/
// 1051. Height Checker

import java.util.Arrays;

// Sort the array and then compare with original array. Return the unmatched index.
public class HeightChecker {
    public static void main(String[] args) {
        int[] heights = {1,1,4,2,1,3};
        HeightChecker hc = new HeightChecker();
        int ans = hc.heightChecker(heights);
        System.out.println(ans);
    }
    public int heightChecker(int[] heights) {
        int[] original = Arrays.copyOf(heights, heights.length);
        Arrays.sort(heights);
        int count = 0;
        for(int i = 0; i < heights.length; i++) {
            if(heights[i] != original[i]) {
                count++;
            }
        }
        return count;
    }
}
