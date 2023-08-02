// https://leetcode.com/problems/sort-colors/description/
// 75. Sort Colors
{
    /**
     Do not return anything, modify nums in-place instead.
    */
    function sortColors(nums: number[]): void {

        // const count: number[] = [0,0,0];
        // for(let i = 0; i < nums.length; i++) {
        //     count[nums[i]]++;
        // }
        // let x = 0;
        // for(let i = 0; i < 3; i++) {
        //     while(count[i]--) {
        //         nums[x++] = i;
        //     }
        // }

        let low = 0, high = nums.length - 1;
        let i = 0;
        while(i <= high) {
            if(nums[i] === 0) {
                [nums[low], nums[i]] = [nums[i], nums[low]];
                low++;
                i++;
            } else if(nums[i] === 1) {
                i++
            } else {
                [nums[i], nums[high]] = [nums[high], nums[i]];
                high--;
            }
        }
        console.log(nums);
    };

    const nums = [2,0,2,1,1,0];
    sortColors(nums);
}