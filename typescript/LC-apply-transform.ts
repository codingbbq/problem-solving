// https://leetcode.com/problems/apply-transform-over-each-element-in-array/

function map(arr: number[], fn: (n: number, i: number) => number): number[] {
    const result:number[] = [];
    for(let i = 0; i < arr.length; i++) {
        result.push(fn(arr[i], i));
    }
    return result;
};

const arr = [1,2,3], fn = function plusone(n: number) { return n + 1; }
const newArr = map(arr, fn);
console.log(newArr);