// https://leetcode.com/problems/third-maximum-number/

import java.util.TreeSet;

public class ThirdMaximumNumber {

    public static void main(String[] args) {
        int[] nums = {5,2,2};

        ThirdMaximumNumber tmn = new ThirdMaximumNumber();
        int k = tmn.thirdMax(nums);
        System.out.println(k);

    }

    public int thirdMax(int[] nums) {

        // Keep track of three numbers

        long max = Long.MIN_VALUE; // Maximum
        long s_max = Long.MIN_VALUE; // Second Maximum
        long t_max = Long.MIN_VALUE; // Third Maximum

        for(long i : nums) {

            if(i > max) {
                t_max = s_max;
                s_max = max;
                max = i;
            } else if(i < max && i > s_max) {
                t_max = s_max;
                s_max = i;
            } else if(i < max && i < s_max && i > t_max) {
                t_max = i;
            }

        }

        if(t_max == Long.MIN_VALUE) {
            return (int)max;
        } else {
            return (int)t_max;
        }

    }

}
