// https://www.codewars.com/kata/5a2b703dc5e2845c0900005a/train/typescript
// Can we divide it ?

export function isDivideBy(number: number, a: number, b: number): boolean {
    if(number % a == 0 && number % b == 0) return true;
    return false;
}

console.log(isDivideBy(-12, 2, -6));