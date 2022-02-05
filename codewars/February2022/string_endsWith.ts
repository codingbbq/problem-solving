// https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/typescript
// String ends with?

export function solution(str: string, ending: string): boolean {
    return !ending.length || str.slice(-ending.length) === ending;
}

console.log(solution('abcde', 'abc'));