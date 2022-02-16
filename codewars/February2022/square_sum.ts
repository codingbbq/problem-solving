// https://www.codewars.com/kata/515e271a311df0350d00000f/train/typescript
// Square(n) Sum

export function squareSum(numbers: number[]): number {
//   return numbers
//     .map((i: number) => i * i)
//     .reduce((acc: number, curr: number) => {
//       return acc + curr;
//     }, 0);

    return numbers
    .reduce((acc: number, curr: number) => {
      return acc + curr * curr;
    }, 0);
}

// console.log(squareSum([0, 3, 4, 5]));
