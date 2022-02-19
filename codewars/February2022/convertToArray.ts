// https://www.codewars.com/kata/5583090cbe83f4fd8c000051/train/typescript
// Convert number to reversed array of digits

export const digitize = (n: number): number[] => {
  let arr = [];
  while (n > 0) {
    arr.push(n % 10);
    n = parseInt((n / 10).toString(), 10);
  }
  if (arr.length == 0) {
    arr.push(n);
  }
  return arr;

  // return [...n.toString()].map(Number).reverse();
};
