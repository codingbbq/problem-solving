// https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3228/

import java.util.Arrays;

public class HeightCheckerArr {
    public static void main(String[] args) {
        int[] heights = { 5,1,2,3,4 };
        HeightCheckerArr hc = new HeightCheckerArr();
        int ans = hc.heightChecker(heights);
        System.out.println(ans);
    }
    public int heightChecker(int[] heights) {
        // Create another array and sort it.
        // Then compare it with original
        int[] original = new int[heights.length];
        for(int i = 0; i < heights.length; i++) {
            original[i] = heights[i];
        }

        // Sort the heights array
        Arrays.sort(heights);
        int count = 0;
        for(int i = 0; i < heights.length; i++) {
            if(original[i] != heights[i]) {
                count++;
            }
        }

        return count;
    }
}
