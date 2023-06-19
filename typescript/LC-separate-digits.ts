// 2553. Separate the Digits in an Array
// https://leetcode.com/problems/separate-the-digits-in-an-array/
{
function separateDigits(nums: number[]): number[] {
    return nums.join('').split('').map((num) => Number(num));
};

const nums = [13,25,83,77];
console.log(separateDigits(nums));
}