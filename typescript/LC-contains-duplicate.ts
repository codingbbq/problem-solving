// https://leetcode.com/problems/contains-duplicate/

// function containsDuplicate(nums: number[]): boolean {
//     const dup: Map<number, number> = new Map<number, number>();
//     for (let index = 0; index < nums.length; index++) {
//         if(dup.has(nums[index])) {
//             return true;
//         } else {
//             dup.set(nums[index], 0);
//         }
//     }
//     return false;
// };

function containsDuplicate(nums: number[]): boolean {
    const s = new Set(nums);
    return s.size !== nums.length;
};

{
    const nums = [1,2,3,1];
    console.log(containsDuplicate(nums));
}