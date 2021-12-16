// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
// 961. N-Repeated Element in Size 2N Array

import java.util.HashMap;
import java.util.Map;

public class RepeatedElements {
    public static void main(String[] args) {
        int[] nums = {5,1,5,2,5,3,5,4};
        RepeatedElements re = new RepeatedElements();
        int ans = re.repeatedNTimes(nums);
        System.out.println(ans);
    }

    public int repeatedNTimes(int[] nums) {
        Map<Integer, Integer> freq = new HashMap<Integer, Integer>();
        for(int i = 0; i < nums.length; i++) {
            freq.put(nums[i], freq.getOrDefault(nums[i], 0)+1);
        }

        for(Map.Entry<Integer, Integer> f : freq.entrySet()) {
            if(f.getValue() >= nums.length/2) {
                return f.getKey();
            }
        }
        return 0;
    }
}
