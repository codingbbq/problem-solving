// https://leetcode.com/problems/find-pivot-index/
// 724. Find Pivot Index

public class FindPivotIndex {
    public static void main(String[] args) {
        int[] nums = {1,2,3};
        FindPivotIndex fi = new FindPivotIndex();
        int ans = fi.pivotIndex(nums);
        System.out.println(ans);
    }
    public int pivotIndex(int[] nums) {
        int total = 0;
        for(int i = 0; i < nums.length; i++) {
            total+= nums[i];
        }

        int leftSum = 0;
        for(int i = 0; i < nums.length; i++) {
            if(leftSum == total - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
}
