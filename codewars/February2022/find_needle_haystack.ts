// https://www.codewars.com/kata/56676e8fabd2d1ff3000000c/train/typescript
// A Needle in the Haystack

export function findNeedle(haystack: any[]): string {
  const ind: number = haystack.indexOf("needle");
  return `found the needle at position ${ind}`;
}

const haystack: any[] = ['hay', 'junk', 'hay', 'hay', 'moreJunk', 'needle', 'randomJunk'];
console.log(findNeedle(haystack));