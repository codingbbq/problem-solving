// https://leetcode.com/problems/reshape-the-matrix/

import java.util.Arrays;

public class ReshapeMatrix {
    public static void main(String[] args) {
        int[][] mat = {{1,2}, {3,4}};
        int r = 1;
        int c = 4;

        ReshapeMatrix rm = new ReshapeMatrix();
        int[][] output = rm.matrixReshape(mat, r, c);
        System.out.println(Arrays.deepToString(output));
    }

    public int[][] matrixReshape(int[][] mat, int r, int c) {
        // Check if it is possible
        int m = mat.length;
        int n = mat[0].length;

        // Return original matrix if not possible to reshape.
        if(m*n != r*c) return mat;

        // It is possible.
        // First flatter the mat 2d array
        int[] flat = new int[n*m];
        int[][] output = new int[r][c];
        int idx = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                flat[idx++] = mat[i][j];
            }
        }

        // Reshape
        int x = 0;
        int y = 0;
        for(int i = 0; i < flat.length; i++) {
            output[x][y] = flat[i];
            y++;
            if(y >= c){
                x++;
                y=0;
            }
        }

        return output;

    }
}
