// https://leetcode.com/problems/move-zeroes/description/
// 283. Move Zeroes
{
    /**
     Do not return anything, modify nums in-place instead.
    */
    function moveZeroes(nums: number[]): void {
        let count = 0;
        for(let i = 0; i < nums.length; i++) {
            if(nums[i] === 0) {
                count++;
            } else {
                nums[i - count] = nums[i];
                nums[i] = 0;
            }
        }
        console.log(nums);
    };

    const nums = [0,1,0,3,12];
    moveZeroes(nums);
}