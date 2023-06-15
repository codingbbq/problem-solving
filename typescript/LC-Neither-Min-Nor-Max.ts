// https://leetcode.com/problems/neither-minimum-nor-maximum/
// 2733. Neither Minimum nor Maximum

{
    function findNonMinOrMax(nums: number[]): number {
        if(nums.length <= 2) return -1;
        let min = nums[0];
        let max = nums[0];
        let selectedNumber = -1;
        for(let i = 1; i < nums.length; i++) {
            if(nums[i] < min) {
                selectedNumber = min;
                min = nums[i];
            } else if(nums[i] > max) {
                selectedNumber = max;
                max = nums[i];
            } else {
                return nums[i];
            }
        }
        return selectedNumber;
    };

    const nums = [1,2,3,4];
    console.log(findNonMinOrMax(nums));
}