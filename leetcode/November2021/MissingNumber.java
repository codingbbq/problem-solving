// https://leetcode.com/problems/missing-number/

public class MissingNumber {

    public static void main(String[] args) {
        int[] nums = {0,1};

        MissingNumber mn = new MissingNumber();
        int k = mn.missingNumber(nums);
        System.out.println(k);
    }

    public int missingNumber(int[] nums) {

        // Sum of first n numbers.
        int n = nums.length;
        int req_sum = (n*(n+1))/2;

        // Sum of all the numbers in the array
        int sum = 0;
        for(int i = 0; i < nums.length; i++) {
            sum+=nums[i];
        }

        // Missing number
        return req_sum - sum;
    }

}
