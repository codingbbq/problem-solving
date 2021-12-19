// https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
// 1725. Number Of Rectangles That Can Form The Largest Square

import java.util.HashMap;
import java.util.Map;

public class GoodRectangles {
    public static void main(String[] args) {
        int[][] rectangles = {{5,8},{3,9},{5,12},{16,5}};
        GoodRectangles gr = new GoodRectangles();
        int count = gr.countGoodRectangles(rectangles);
        System.out.println(count);
    }
    public int countGoodRectangles(int[][] rectangles) {
        // Use a map to maintain the count of the lowest lengths in given pair
        Map<Integer, Integer> l = new HashMap<Integer, Integer>();

        // Maintain which is the best rectangle
        int best = 0;
        for(int i = 0; i < rectangles.length; i++) {
            int lowest = Math.min(rectangles[i][0], rectangles[i][1]);
            best = Math.max(best, lowest);
            l.put(lowest, l.getOrDefault(lowest, 0)+1);
        }

        // return the count of best
        return l.get(best);
    }
}
