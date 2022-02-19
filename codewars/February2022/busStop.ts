// https://www.codewars.com/kata/5648b12ce68d9daa6b000099/train/typescript
// Number of People in the Bus

export function number(busStops: [number, number][]): number {
  let enter = 0;
  let exit = 0;
  busStops.forEach((stop: number[]) => {
    enter += stop[0];
    exit += stop[1];
  });
  return enter - exit;
}
