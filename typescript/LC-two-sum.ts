// https://leetcode.com/problems/two-sum/


function twoSum(nums: number[], target: number): number[] {
    let data: Map<number, number> = new Map<number, number>();
    for(let i = 0; i < nums.length; i++) {
        if(data.has(target - nums[i])) {
            const ind = data.get(target - nums[i]);
            if(ind !== undefined && typeof ind === 'number'){
                return [i, ind];
            }
        } else {
            data.set(nums[i], i);
        }
    }
    return [0, 0];
};


let nums = [2,7,11,15], target = 9;
console.log(twoSum(nums, target));