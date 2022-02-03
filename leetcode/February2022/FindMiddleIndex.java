// https://leetcode.com/problems/find-the-middle-index-in-array/
// 1991. Find the Middle Index in Array

public class FindMiddleIndex {
    public static void main(String[] args) {
        int[] nums = {2,3,-1,8,4};
        FindMiddleIndex fi = new FindMiddleIndex();
        int ans = fi.findMiddleIndex(nums);
        System.out.println(ans);
    }
    public int findMiddleIndex(int[] nums) {
        int total = 0;
        for(int i = 0; i < nums.length; i++) {
            total+= nums[i];
        }

        int leftsum = 0;
        for(int i = 0; i < nums.length; i++) {
            if(leftsum == total - leftsum - nums[i]) {
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
}
