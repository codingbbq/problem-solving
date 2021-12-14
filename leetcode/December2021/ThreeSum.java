// https://leetcode.com/problems/3sum/
// Three Sum

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class ThreeSum {

    public static void main(String[] args) {
        int[] nums = {0,0,0};
        ThreeSum ts = new ThreeSum();
        List<List<Integer>> answer = ts.threeSum(nums);
        System.out.println(answer);
    }

    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> answer = new ArrayList<>();
        Arrays.sort(nums);
        // [-4, -1, -1, 0, 1 ,2]
        for(int i = 0; i < nums.length - 2; i++) {
            if(i == 0 || nums[i] > nums[i-1]) {
                int start = i + 1;
                int end = nums.length - 1;

                while( start < end) {
                    // If sum is equal to zero
                    if(nums[i] + nums[start] + nums[end] == 0) {
                        answer.add(Arrays.asList(nums[i], nums[start], nums[end]));
                    }

                    if(nums[i] + nums[start] + nums[end] < 0) {
                        int currentStart = start;
                        while(nums[start] == nums[currentStart] && start < end) {
                            start++;
                        }
                    } else {
                        int currentEnd = end;
                        while(nums[end] == nums[currentEnd] && start < end) {
                            end--;
                        }
                    }
                }
            }

        }

        return answer;
    }

}
