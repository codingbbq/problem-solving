// https://leetcode.com/problems/missing-number/description/
// 268. Missing Number
{
    function missingNumber(nums: number[]): number {
        // Using the formual n*n-1/2 for sum of first n numbers;
        /*
        const n = nums.length;
        let sum = ((n)*(n+1))/2;
        for(let i = 0; i <= n-1; i++) {
            sum -= nums[i];
        }
        return sum;
        */
       
        // Using binary search to find the missing number
        nums.sort();
        let start = 0;
        let end = nums.length - 1;
        while(start < end) {
            let mid = Math.floor(start + ((end - start)/2));
            if(nums[mid] >= mid) {
                start = mid+1;
            } else {
                end = mid;
            }
        }
        return start;
    };

    const nums = [0,1];
    console.log(missingNumber(nums));
}