// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// 34. Find First and Last Position of Element in Sorted Array

{
    function searchRange(nums: number[], target: number): number[] {
        let left = binarySearch(nums, target, true);
        let right = binarySearch(nums, target, false);
        return [left, right];
    };

    function binarySearch(nums: number[], target: number, LeftBiased: boolean): number {
        let left = 0;
        let right = nums.length - 1;
        let i = -1;
        while(left <= right) {
            const mid = left + Math.ceil((right - left) / 2);
            if(nums[mid] < target) {
                left = mid+1;
            } else if(nums[mid] > target) {
                right = mid-1;
            } else {
                i = mid;
                if(LeftBiased) {
                    right = mid-1;
                } else {
                    left = mid+1;
                }
            }
        }
        return i;
    }

    const nums = [5,7,7,8,8,10], target = 6;
    console.log(searchRange(nums,target));
}