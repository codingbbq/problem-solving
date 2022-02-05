// https://www.codewars.com/kata/57eae20f5500ad98e50002c5/solutions/typescript
// Remove String Spaces

export function noSpace(x: string): string {
  return x.trim().replace(/\s+/g, '');
}

console.log(noSpace("aa bb cc"));