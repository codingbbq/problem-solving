// https://www.codewars.com/kata/57cc975ed542d3148f00015b/train/typescript
// You only need one - beginner

export const check = (a: (number | string)[], x: number | string): boolean => {
  let result: boolean = a.some((toSearch) => x == toSearch);
  return result;
};

console.log(check([66, 101], 66));