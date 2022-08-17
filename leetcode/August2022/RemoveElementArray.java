// https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3247/
// Remove Element

import java.util.Arrays;

public class RemoveElementArray {
    public static void main(String[] args) {
        int[] nums = { 0,1,2,2,3,0,4,2 };
        int val = 2;
        RemoveElementArray re = new RemoveElementArray();
        int ans = re.removeElement(nums, val);
        System.out.println(ans);
        System.out.println(Arrays.toString(nums));
    }
    public int removeElement(int[] nums, int val) {
        int i = 0;
        int j = nums.length - 1;
        int count = 0;
        while(i <= j) {
            if(nums[j] == val) {
                j--;
                count++;
                continue;
            }

            if(nums[i] == val) {
                swap(nums, i, j);
                count++;
                i++;
                j--;
            } else {
                i++;
            }

        }

        return nums.length - count;
    }

    public void swap(int[] nums, int x, int y) {
        int temp = nums[x];
        nums[x] = nums[y];
        nums[y] = temp;
    }
}
