// https://leetcode.com/problems/sign-of-the-product-of-an-array/
// 1822. Sign of the Product of an Array

public class SignFunOfProduct {
    public static void main(String[] args) {
        int[] nums = {41,65,14,80,20,10,55,58,24,56,28,86,96,10,3,84,4,41,13,32,42,43,83,78,82,70,15,-41};
        SignFunOfProduct sp = new SignFunOfProduct();
        int ans = sp.arraySign(nums);
        System.out.println(ans);
    }
    public int arraySign(int[] nums) {
        int product = 1;
        for(int i = 0; i < nums.length; i++) {
            product *= nums[i];
            if(product > 0){
                product = 1;
            } else if(product < 0) {
                product = -1;
            } else if(product == 0) {
                break;
            }
        }
        if(product == 0) {
            return 0;
        } else if(product > 0) {
            return 1;
        } else {
            return -1;
        }
    }
}
