{
type Fn = (accum: number, curr: number) => number

function reduce(nums: number[], fn: Fn, init: number): number {
    let initial = init;
    for(let i = 0; i < nums.length; i++) {
        initial = fn(initial, nums[i]);
    }
    return initial;
};

const nums = [1,2,3,4];
const fn = function sum(accum: number, curr: number) { return accum + curr; };
const init = 0;

console.log(reduce(nums, fn, init));
}