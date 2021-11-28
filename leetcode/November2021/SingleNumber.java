// https://leetcode.com/problems/single-number/

public class SingleNumber {

    public static void main(String[] args) {
        int[] nums = {2,2,1};

        SingleNumber sn = new SingleNumber();
        int k = sn.singleNumber(nums);
        System.out.println(k);
    }

    public int singleNumber(int[] nums) {
        int x = 0;

        for(int i = 0; i < nums.length; i++) {
            x^=nums[i];
        }

        return x;
    }

}
