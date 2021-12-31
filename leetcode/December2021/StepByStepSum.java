// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
// 1413. Minimum Value to Get Positive Step by Step Sum

public class StepByStepSum {
    public static void main(String[] args) {
        int[] nums = {-3,2,-3,4,2};
        StepByStepSum ss = new StepByStepSum();
        int ans = ss.minStartValue(nums);
        System.out.println(ans);
    }
    public int minStartValue(int[] nums) {
        int minVal = 0;
        int total = 0;
        for(int num: nums) {
            total += num;
            minVal = Math.min(minVal, total);
        }
        return -minVal + 1;
    }
}
