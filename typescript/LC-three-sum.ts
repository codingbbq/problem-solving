// https://leetcode.com/problems/3sum/
// 15. 3Sum
{
    function threeSum(nums: number[]): number[][] {
        let output: number[][] = [];
        nums.sort((a, b) => a - b);
        for(let i = 0; i < nums.length; i++) {
            if(i > 0 && nums[i] === nums[i-1]) continue;
            let start = i+1;
            let end = nums.length - 1;
            while(start < end) {
                let t = nums[i] + nums[start] + nums[end]; 
                if(t > 0) {
                    end--;
                } else if(t < 0) {
                    start++;
                } else {
                    output.push([nums[i], nums[start], nums[end]]);
                    start++;
                    while(nums[start] === nums[start - 1] && start < end) {
                        start++;
                    }
                }
            }
        }
        return output;
    };

    const nums = [0,0,0,0];
    console.log(threeSum(nums));
}