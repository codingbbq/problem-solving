// https://leetcode.com/problems/valid-parentheses/

function isValid(s: string): boolean {
    const stack: string[] = [];
    if(s.length <= 0) return false;

    for(let i = 1; i < s.length; i++) {
        let len = stack.length;
        if((stack[len-1] === '(' && s[i] === ')') || (stack[len-1] === '[' && s[i] === ']') || (stack[len-1] === '{' && s[i] === '}')) {
            stack.pop();
        } else {
            stack.push(s[i]);
        }
    }
    return (stack.length <= 0) ? true : false;
};

const s = '()[]{}';
console.log(isValid(s));