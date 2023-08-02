// https://leetcode.com/problems/concatenation-of-array/
// 1929. Concatenation of Array
{
    function getConcatenation(nums: number[]): number[] {
        let ans: number[] = new Array(nums.length * 2);
        console.log(...nums);
        // for(let i = 0; i < nums.length; i++) {
        //     [ans[i], ans[nums.length+i]] = [nums[i], nums[i]];
        // }
        return ans;
    };

    const nums = [1,2,1];
    console.log(getConcatenation(nums));
}