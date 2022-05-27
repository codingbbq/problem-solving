// https://leetcode.com/problems/find-the-duplicate-number/
// 287. Find the Duplicate Number

public class FindDuplicateInArray {
    public static void main(String[] args) {
        int[] nums = { 1,3,4,2,2 };
        FindDuplicateInArray fa = new FindDuplicateInArray();
        int ans = fa.findDuplicate(nums);
        System.out.println(ans);
    }
    public int findDuplicate(int[] nums) {
        int curr;
        for(int i = 0; i < nums.length; i++) {
            curr = Math.abs(nums[i]);
            if(nums[curr] < 0) {
                return curr;
            }
            nums[curr] *= -1;
        }
        return 0;
    }
}
