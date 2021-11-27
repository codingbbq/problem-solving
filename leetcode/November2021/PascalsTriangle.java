// https://leetcode.com/problems/pascals-triangle/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PascalsTriangle {

    public static void main(String[] args) {
        int numRows = 5;
        PascalsTriangle pt = new PascalsTriangle();
        System.out.println(pt.generate(numRows));
    }

    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> li = new ArrayList<>();

        
        // Now for numRows
        for(int i = 0; i < numRows; i++) {
            
            // Individual rows
            // Start with the 0th row. It will always be 1.
            List<Integer> row = new ArrayList<>();
            
            if(i == 0) {
                row.add(0, 1);
                li.add(row);
                continue;
            }
            
            row.add(0, 1); // Begin new row with 1;

            // loop through the previous added row in the list item
            for(int j = 1; j < li.get(i-1).size(); j++) {
                row.add(li.get(i-1).get(j-1) + li.get(i-1).get(j));
            }

            row.add(1); // This is the last item, it has to be 1

            li.add(row);
        }

        return li;
    }

}
