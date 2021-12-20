// https://leetcode.com/problems/lucky-numbers-in-a-matrix/
// 1380. Lucky Numbers in a Matrix

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class LuckyNumberInMatrix {
    public static void main(String[] args) {
        int[][] matrix = {
                {1,10,4,2},
                {9,3,8,7},
                {15,16,17,12}
        };
        LuckyNumberInMatrix lm = new LuckyNumberInMatrix();
        List<Integer> ans = lm.luckyNumbers(matrix);
        System.out.println(ans);
    }
    public List<Integer> luckyNumbers (int[][] matrix) {
        // Distinct matrix so no elements will be repeated.
        List<Integer> minRow = new ArrayList<Integer>();
        List<Integer> maxCol = new ArrayList<Integer>();

        for(int i = 0; i < matrix.length; i++) {
            // Get all the minimum values in row
            int minimum = Integer.MAX_VALUE;
            for(int x : matrix[i]) {
                minimum = Math.min(minimum, x);
            }
            minRow.add(minimum);
        }

        for(int i = 0; i < matrix[0].length; i++) {
            // Get all maximum values in column
            int maximum = Integer.MIN_VALUE;
            for(int j = 0; j < matrix.length; j++) {
                maximum = Math.max(maximum, matrix[j][i]);
            }
            maxCol.add(maximum);
        }
        // Find the common element, and it will be lucky number.
        List<Integer> output = new ArrayList<>(minRow);
        output.retainAll(maxCol);
        return output;
    }
}
