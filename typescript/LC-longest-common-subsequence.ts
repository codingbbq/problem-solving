// https://leetcode.com/problems/longest-consecutive-sequence/description
// 128. Longest Consecutive Sequence
{
    function longestConsecutive(nums: number[]): number {
        const source = new Set(nums);
        let longest = 0;
        for(let i = 0; i < nums.length; i++) {
            if(!source.has(nums[i] - 1)) {
                // possible sequence
                let seq = nums[i];
                let count = 1;
                while(source.has(seq + 1)) {
                    count++;
                    seq += 1;
                }
                longest = Math.max(longest, count);
            }
        }
        return longest;
    };

    const nums = [0,3,7,2,5,8,4,6,0,1];
    console.log(longestConsecutive(nums));
}