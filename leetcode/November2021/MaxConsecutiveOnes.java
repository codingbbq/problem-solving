// https://leetcode.com/problems/max-consecutive-ones/

public class MaxConsecutiveOnes {

    public static void main(String[] args) {
        int[] nums = {1,0,1,1,0,1};

        MaxConsecutiveOnes mc = new MaxConsecutiveOnes();
        int k = mc.findMaxConsecutiveOnes(nums);
        System.out.println(k);
    }

    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0; // To keep track of consecutive 1
        int max = 0; // Maximum of consecutive 1
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] == 1) {
                count++;
            } else{
                // Reset the count if you encounter 1
                count = 0;
            }
            max = Math.max(max, count);
        }

        return max;
    }
}
