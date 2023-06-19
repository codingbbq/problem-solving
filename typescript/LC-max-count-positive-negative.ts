// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
// 2529. Maximum Count of Positive Integer and Negative Integer

{
    function maximumCount(nums: number[]): number {
        
        // If all numbers are 0, return 0
        if(nums[0] === 0 && nums[nums.length - 1] === 0) {
            return 0;
        }

        // If all numbers are -ve or all are +ve
        if(nums[0] > 0 || nums[nums.length - 1] < 0) {
            return nums.length;
        }

        // Using binary search
        const minArrayLength = binarySearchMin(nums);
        const maxArrayLength = binarySearchMax(nums);
        return Math.max(minArrayLength, nums.length - maxArrayLength);
    };

    function binarySearchMin(arr: number[]): number {
        let start: number = 0;
        let end: number = arr.length - 1;

        while(start < end) {
            const mid = start + Math.ceil((end - start) / 2);
            if(arr[mid] < 0) {
                start = mid;
            } else {
                end = mid - 1;
            }
        }
        return start;
    }

    function binarySearchMax(arr: number[]): number {
        let start: number = 0;
        let end: number = arr.length - 1;

        while(start < end) {
            const mid = start + Math.floor((end - start) / 2);
            if(arr[mid] > 0) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }

    const nums = [-3,-2,-1,0,0,1,2];
    console.log(maximumCount(nums));
}