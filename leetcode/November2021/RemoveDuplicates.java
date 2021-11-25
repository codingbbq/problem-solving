import java.util.Arrays;

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
public class RemoveDuplicates {

    public static void main(String[] args) {
        int[] nums = {1,1,2};
        RemoveDuplicates rd = new RemoveDuplicates();
        int k = rd.removeDuplicates(nums);
        System.out.println(k);
    }

    public int removeDuplicates(int[] nums) {

        if(nums.length > 0) {
            int unique = nums[0];
            int k = 1;
            int position = 0;

            for(int i = 1; i < nums.length; i++) {
                if(nums[i] != unique) {
                    unique = nums[i];
                    position = position+1;
                    nums[position] = nums[i];
                    k++;
                }
            }
            // System.out.println(Arrays.toString(nums));
            return k;
        } else {
            return 0;
        }

    }

}
