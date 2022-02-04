// https://www.codewars.com/kata/5a00e05cc374cb34d100000d/train/typescript
// Reversed sequence

export const reverseSeq = (n: number): number[] => {
  const rev: number[] = [];
  for (let i = n; i > 0; i--) {
    rev.push(i);
  }
  return rev;
};

console.log(reverseSeq(5));
