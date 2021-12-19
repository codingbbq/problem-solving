// https://leetcode.com/problems/smallest-index-with-equal-value/
// 2057. Smallest Index With Equal Value

public class SmallestIndex {
    public static void main(String[] args) {
        int[] nums = {0,1,2};
        SmallestIndex si = new SmallestIndex();
        int ans = si.smallestEqual(nums);
        System.out.println(ans);
    }
    public int smallestEqual(int[] nums) {
        for(int i = 0; i < nums.length; i++) {
            if(i%10 == nums[i]) {
                return i;
            }
        }
        return -1;
    }

}
