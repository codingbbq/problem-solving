// https://leetcode.com/problems/find-target-indices-after-sorting-array/
// 2089. Find Target Indices After Sorting Array

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class FindTargetIndices {
    public static void main(String[] args) {
        int[] nums = {1,2,5,2,3};
        int target = 3;

        FindTargetIndices fti = new FindTargetIndices();
        List<Integer> answer = fti.targetIndices(nums, target);
        System.out.println(answer);
    }
    public List<Integer> targetIndices(int[] nums, int target) {
        List<Integer> answer = new ArrayList<Integer>();
        Arrays.sort(nums);
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] == target) {
                answer.add(i);
            }
        }
        return answer;
    }
}
