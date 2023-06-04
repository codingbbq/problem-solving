// https://leetcode.com/problems/filter-elements-from-array/
{

function filter(arr: number[], fn: (n: number, i: number) => any): number[] {
    const res: number[] = [];
    for(let i = 0; i < arr.length; i++) {
        if(fn(arr[i], i)) {
            res.push(arr[i]);
        }
    }
    return res;
};

const arr = [0,10,20,30], fn = function greaterThan10(n: number) { return n > 10; }
const result = filter(arr, fn);
console.log(result);
}