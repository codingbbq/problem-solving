// https://www.codewars.com/kata/57eae65a4321032ce000002d/train/typescript
// Fake Binary

export const fakeBin = (x: string): string => {
  let output: string = '';
  for (let i = 0; i < x.length; i++) {
    if (parseInt(x[i], 10) < 5) {
      output += '0';
    } else {
      output += '1';
    }
  }
  return output;
};

console.log(fakeBin('45385593107843568'));