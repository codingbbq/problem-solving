// https://leetcode.com/problems/two-sum/
// 1. Two Sum

{
    function twoSum(nums: number[], target: number): number[] {

        // Brute force approach O(n^2)
        /*
        for(let i = 0; i < nums.length; i++) {
            for(let j = i; j < nums.length; j++) {
                if(nums[i] + nums[j] === target) {
                    return [i, j];
                }
            }
        }
        return [0,0];
        */

        const lookup: { [key: string] : number} = {};
        for(let i = 0; i < nums.length; i++) {
            let sum = String(target - nums[i]);
            if(sum in lookup) {
                return [lookup[sum], i];
            }
            lookup[nums[i]] = i;
        }
        return [0, 0];
    };

    const nums = [2,7,11,15], target = 9;
    console.log(twoSum(nums, target));
}