// https://leetcode.com/problems/pascals-triangle-ii/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PascalsTriangle2 {

    public static void main(String[] args) {
        int rowIndex = 3;

        PascalsTriangle2 pt = new PascalsTriangle2();
        List<Integer> row = pt.getRow(rowIndex);

        System.out.println(row);

    }

    public List<Integer> getRow(int rowIndex) {

        List<List<Integer>> data = new ArrayList<>();

        for(int i = 0; i <= rowIndex; i++) {
            List<Integer> x = new ArrayList<>();
            if(i == 0) {
                x.add(0,1);
                data.add(x);
            } else {

                // First item in the row
                x.add(0,1);

                // Loop through previous row
                for(int j = 0; j < data.get(i-1).size() - 1; j++) {
                    x.add(data.get(i-1).get(j) + data.get(i-1).get(j+1));
                }

                // Last item
                x.add(1);

                data.add(x);

            }

        }

        return data.get(rowIndex);
    }

}
