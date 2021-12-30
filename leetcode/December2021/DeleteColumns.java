import java.util.*;

// https://leetcode.com/problems/delete-columns-to-make-sorted/
// 944. Delete Columns to Make Sorted
public class DeleteColumns {
    public static void main(String[] args) {
        String[] strs = {"a","b"};
        DeleteColumns dc = new DeleteColumns();
        int ans = dc.minDeletionSize(strs);
        System.out.println(ans);
    }
    public int minDeletionSize(String[] strs) {
        // Length of each string
        int l = strs[0].length();

        // Rearranged array
        String[] re = new String[l];
        for(String x : strs) {
            for(int i = 0; i < l; i++) {
                if(re[i] == null) re[i] = "";
                re[i] += x.charAt(i);
            }
        }

        int count = 0;

        int newRe = re[0].length();

        // Loop through each item in re array and check if it is lexicographically arranged
        for(int i = 0; i < re.length; i++) {
            for(int j = 1; j < newRe; j++) {
                if(re[i].charAt(j) < re[i].charAt(j-1)) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
}
