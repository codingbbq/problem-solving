// https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/
// 1005. Maximize Sum Of Array After K Negations

import java.util.Arrays;

public class MaximizeAfterNegations {
    public static void main(String[] args) {
        int[] nums = {-2,5,0,2,-2};
        int k = 3;
        MaximizeAfterNegations mn = new MaximizeAfterNegations();
        int ans = mn.largestSumAfterKNegations(nums, k);
        System.out.println(ans);
    }
    public int largestSumAfterKNegations(int[] nums, int k) {
        Arrays.sort(nums);
        // First remove all the negations.
        for(int i = 0; i < nums.length; i++) {

            // Assuming there are k negative elements.
            if(nums[i] < 0 && k > 0) {
                nums[i] = -1 * nums[i];
                k--;
            } else {
                break;
            }
            // If all the negative numbers are covered and k = 0; break;
            if(k == 0) break;
        }

        // We still need to perform operations k times, do it on the first smallest element itself.
        // This will ensure that maximum sum is produced.
        Arrays.sort(nums);
        while(k > 0) {
            nums[0] = -1 * nums[0];
            k--;
        }

        // Now loop throught the array and find its sum.
        int sum = 0;
        for(int x : nums) {
            sum+=x;
        }

        return sum;
    }
}
