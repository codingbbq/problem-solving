// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// 26. Remove Duplicates from Sorted Array
{
    function removeDuplicates(nums: number[]): number {
        let k = 1;
        for(let i = 1; i < nums.length; i++) {
            if(nums[i] !== nums[i-1]) {
                nums[k++] = nums[i];
            }
        }
        console.log(nums);
        return k;
    };

    const nums = [0,0,1,1,1,2,2,3,3,4];
    console.log(removeDuplicates(nums));
}