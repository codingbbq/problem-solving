// https://leetcode.com/problems/3sum-closest/
// 3 sum closest

import java.util.Arrays;

public class ThreeSumClosest {

    public static void main(String[] args) {
        int[] nums = {-1,2,1,-4};
        int target = 1;

        ThreeSumClosest tsc = new ThreeSumClosest();
        int answer = tsc.threeSumClosest(nums, target);
        System.out.println(answer);

    }

    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        // [-4, -1, 1, 2]
        int closest = Integer.MAX_VALUE;
        int ans = 0;
        for(int i = 0; i < nums.length - 2; i++) {
                int start = i+1;
                int end = nums.length - 1;

                while(start < end) {
                    int sumOfnumbers = nums[i] + nums[start] + nums[end];
                    if (Math.abs(sumOfnumbers - target) < closest) {
                        closest = Math.abs(sumOfnumbers - target);
                        ans = sumOfnumbers;
                    }
                    if (sumOfnumbers == target) {
                        return sumOfnumbers;
                    } else if (sumOfnumbers < target) {
                        start++;
                    } else {
                        end--;
                    }
                }
          }

        return ans;
    }
}
