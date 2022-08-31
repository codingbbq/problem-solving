// https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3270/

import java.util.ArrayList;
import java.util.List;

public class FindDissapearedNumbers {
    public static void main(String[] args) {
        int[] nums = { 4,3,2,7,8,2,3,1 };
        FindDissapearedNumbers fd = new FindDissapearedNumbers();
        List<Integer> ans = fd.findDisappearedNumbers(nums);
        System.out.println(ans);
    }
    public List<Integer> findDisappearedNumbers(int[] nums) {
        // Numbers are from 1: n;
        for(int i = 0; i < nums.length; i++) {
            int index = Math.abs(nums[i]) - 1;
            if(nums[index] > 0) {
                nums[index] = nums[index] * -1;
            }
        }

        List<Integer> ans = new ArrayList<>();
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] > 0) {
                ans.add(i+1);
            }
        }

        return ans;
    }
}
