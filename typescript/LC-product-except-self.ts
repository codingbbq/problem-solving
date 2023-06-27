// 238. Product of Array Except Self
// https://leetcode.com/problems/product-of-array-except-self/
{
    function productExceptSelf(nums: number[]): number[] {
        const prefix: number[] = new Array(nums.length).fill(1)
        const postfix: number[] = new Array(nums.length).fill(1);
        for(let i = 0; i < nums.length; i++) {
            if(i == 0) {
                prefix[i] = 1*nums[i];
            } else {
                prefix[i] = nums[i] * prefix[i-1];
            };
        }

        for(let i = nums.length - 1; i >= 0; i--) {
            if(i === nums.length - 1) {
                postfix[nums.length - 1] = 1*nums[i];
            } else {
                postfix[i] = nums[i] * postfix[i+1];
            }
        }

        console.log(prefix);
        console.log(postfix);

        return prefix;
    };

    const nums = [-1,1,0,-3,3];
    console.log(productExceptSelf(nums));
}