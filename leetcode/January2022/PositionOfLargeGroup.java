// https://leetcode.com/problems/positions-of-large-groups/
// 830. Positions of Large Groups

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PositionOfLargeGroup {
    public static void main(String[] args) {
        String s = "aaa";
        PositionOfLargeGroup pg = new PositionOfLargeGroup();
        List<List<Integer>> ans = pg.largeGroupPositions(s);
        System.out.println(ans);
    }
    public List<List<Integer>> largeGroupPositions(String s) {

//        List<List<Integer>> ans = new ArrayList();
//        int i = 0, N = s.length(); // i is the start of each group
//        for (int j = 0; j < N; ++j) {
//            if (j == N-1 || s.charAt(j) != s.charAt(j+1)) {
//                // Here, [i, j] represents a group.
//                if (j-i+1 >= 3)
//                    ans.add(Arrays.asList(new Integer[]{i, j}));
//                i = j + 1;
//            }
//        }
//
//        return ans;

        List<List<Integer>> ans = new ArrayList<>();
        int start = 0;
        int end = 0;
        for(int i = 0; i < s.length(); i++) {
            if(i == 0) {
                start = 0;
                continue;
            }
            if(s.charAt(i-1) == s.charAt(i)) {
                end = i;
            } else {
                // Check if we have a winner
                if(end+1 - start >= 3) {
                    List<Integer> temp = new ArrayList<Integer>();
                    temp.add(start);
                    temp.add(end);
                    ans.add(temp);
                }
                // Reset start and end
                start = i;
                end = i;
            }
            
        }

        // Account for the last
        // Check if we have a winner
        if(end+1 - start >= 3) {
            List<Integer> temp = new ArrayList<Integer>();
            temp.add(start);
            temp.add(end);
            ans.add(temp);
        }

        return ans;
    }
}
