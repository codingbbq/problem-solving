// https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
// 2176. Count Equal and Divisible Pairs in an Array

public class EqualAndDivisiblePairs {
    public static void main(String[] args) {
        int[] nums = {3,1,2,2,2,1,3};
        int k = 2;
        EqualAndDivisiblePairs ep = new EqualAndDivisiblePairs();
        int ans = ep.countPairs(nums, k);
        System.out.println(ans);
    }

    public int countPairs(int[] nums, int k) {
        int count = 0;
        for(int i = 0; i < nums.length; i++) {
            for(int j = i+1; j < nums.length; j++) {
                if(nums[i] == nums[j] && i*j % k == 0) {
                    count++;
                }
            }
        }
        return count;
    }
}
