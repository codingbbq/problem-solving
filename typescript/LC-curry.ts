// https://leetcode.com/problems/curry/

function curry(fn: Function): Function {
    return function curried(...args: number[]) {
        if(args.length >= fn.length) return fn(...args);
        return function(...nextArgs: number[]) {
            return curried(...args, ...nextArgs);
        }
    };
};

function sum(a: number, b: number): number { return a + b; }
const csum = curry(sum);
console.log(csum(1)(2)); // 3
console.log(csum(1,2));