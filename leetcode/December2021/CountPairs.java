// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
// 2006. Count Number of Pairs With Absolute Difference K

public class CountPairs {
    public static void main(String[] args) {
        int[] nums = {1,2,2,1};
        int k = 1;

        CountPairs cp = new CountPairs();
        int answer = cp.countKDifference(nums, k);
        System.out.println(answer);
    }

    public int countKDifference(int[] nums, int k) {
        int count = 0;
        for(int i = 0; i < nums.length; i++) {
            for(int j = i+1; j < nums.length; j++) {
                if(Math.abs(nums[i] - nums[j]) == k) {
                    count++;
                }
            }
        }
        return count;
    }
}
