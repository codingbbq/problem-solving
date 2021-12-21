// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
// 1337. The K Weakest Rows in a Matrix

import java.util.*;

public class WeakestRows {
    public static void main(String[] args) {
         int[][] mat = {
                 {1,0},{1,0},{1,0},{1,1}
         };
         int k = 4;
         WeakestRows wr = new WeakestRows();
         int[] ans = wr.kWeakestRows(mat, k);
         System.out.println(Arrays.toString(ans));
    }
    public int[] kWeakestRows(int[][] mat, int k) {
        // Traverse vertically.
        int Row = mat.length;
        int Col = mat[0].length;
        // To maintain the order of insertion
        Set<Integer> ans = new LinkedHashSet<>();

        int[] res = new int[k];
        int index= 0;
        // Traverse the matrix vertically.
        for(int i = 0; i < Col; i++) {
            for(int j = 0; j < Row; j++) {
                // If we do not find soldiers, consider it as weak row.
                if(mat[j][i] == 0 && ans.add(j)) {
                    res[index++] = j;
                }
                if(index == k) {
                    return res;
                }
            }
        }

        for(int i=0; i<Row; i++){
            if(ans.add(i)){
                res[index++] = i;
            }
            if(index == k){
                return res;
            }
        }
        return res;
    }
}
