// https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/
// 1909. Remove One Element to Make the Array Strictly Increasing

public class StrictlyIncreasing {
    public static void main(String[] args) {
        int[] nums = {1,1};
        StrictlyIncreasing si = new StrictlyIncreasing();
        boolean ans = si.canBeIncreasing(nums);
        System.out.println(ans);
    }
    public boolean canBeIncreasing(int[] nums) {
        boolean removed = false;

        for (int i = 1; i < nums.length; ++i)
            if (nums[i - 1] >= nums[i]) {
                // Check if we have already removed some element previously.
                if (removed) {
                    return false;
                }
                removed = true; // remove nums[i - 1]
                if (i > 1 && nums[i - 2] >= nums[i])
                    nums[i] = nums[i - 1]; // remove nums[i] instead
            }

        return true;
    }
}
