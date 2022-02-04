// https://www.codewars.com/kata/57f781872e3d8ca2a000007e/train/typescript
// Beginner - Lost Without a Map

export function maps(x: number[]): number[] {
  return x.map((a) => 2 * a);
}

console.log(maps([1,2,3]));