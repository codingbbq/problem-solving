// https://leetcode.com/problems/summary-ranges/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class SummaryRanges {

    public static void main(String[] args) {

        int[] nums = {0,1,2,4,5,7};
        SummaryRanges sr = new SummaryRanges();
        List<String> range = sr.summaryRanges(nums);
        System.out.println(range);
    }

    public List<String> summaryRanges(int[] nums) {

        List<String> r = new ArrayList<String>();

        for(int i = 0; i < nums.length; i++) {

            int start = nums[i];

            while(i+1 != nums.length && (nums[i+1] - nums[i] == 1)) {
                i++;
            }
            if(nums[i] !=  start) {
                r.add(start + "->"+ nums[i]);
            } else {
                r.add(""+start);
            }

        }

        return r;
    }

}
