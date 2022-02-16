// https://www.codewars.com/kata/5861d28f124b35723e00005e/train/typescript
// Will you make it?

export const zeroFuel = (distance: number, mpg: number, fuelLeft: number): boolean => {
    if(fuelLeft * mpg >= distance) return true;
    return false;
};

// console.log(zeroFuel(50, 25, 2));