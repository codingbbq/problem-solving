// https://leetcode.com/problems/maximum-difference-between-increasing-elements/
// 2016. Maximum Difference Between Increasing Elements

public class MaximumDifferenceIncreasing {
    public static void main(String[] args) {
        int[] nums = {7,1,5,4};
        MaximumDifferenceIncreasing mi = new MaximumDifferenceIncreasing();
        int ans = mi.maximumDifference(nums);
        System.out.println(ans);
    }
    public int maximumDifference(int[] nums) {
        int maximum = -1;
        for(int i = 0; i < nums.length - 1; i++) {
            for(int j = i+1; j < nums.length; j++) {
                if(nums[i] < nums[j]) {
                    maximum = Math.max(maximum, nums[j] - nums[i]);
                }
            }
        }
        return maximum;
    }
}
