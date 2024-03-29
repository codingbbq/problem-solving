// https://leetcode.com/problems/search-insert-position/
// 35. Search Insert Position
{
    function searchInsert(nums: number[], target: number): number {
        let low = 0;
        let high = nums.length - 1;
        while(low <= high) {
            let mid = Math.floor(low + (high - low)/2);
            if(nums[mid] === target) return mid;
            if(nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    };

    const nums = [1,3,5,6], target = 2;
    console.log(searchInsert(nums, target));
}