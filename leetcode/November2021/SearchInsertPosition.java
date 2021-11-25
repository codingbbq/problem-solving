// https://leetcode.com/problems/search-insert-position/

public class SearchInsertPosition {

    public static void main(String[] args) {
        int[] nums = {1,3,5,6};
        int target = 5;

        SearchInsertPosition sip = new SearchInsertPosition();
        int k = sip.searchInsert(nums, target);
        System.out.println(k);
    }

    public int searchInsert(int[] nums, int target) {

        for(int i = 0; i < nums.length; i++) {
            if(nums[i] >= target) {
                return i;
            }
        }

        // For the last index
        return nums.length;
    }

}
