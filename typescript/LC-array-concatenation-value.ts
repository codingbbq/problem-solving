// 2562. Find the Array Concatenation Value
// https://leetcode.com/problems/find-the-array-concatenation-value/

{
    function findTheArrayConcVal(nums: number[]): number {
        let concat = 0;
        let start = 0;
        let end = nums.length - 1;
        while(start <= end) {
            if(start === end) {
                concat += nums[start];
            } else {
                concat += Number(nums[start] + '' + nums[end]);
            }
            start++;
            end--;
        }
        return concat;
    };

    const nums = [7,52,2,4];
    console.log(findTheArrayConcVal(nums));
}