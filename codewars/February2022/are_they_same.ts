// https://www.codewars.com/kata/550498447451fbbd7600041c/typescript
// Are they "same"

export function comp(a1: number[] | null, a2: number[] | null): boolean {
    if((a1 == null || a2 == null) || a1.length !== a2.length) return false;
    a1?.sort((a: number, b: number) => a - b);
    a2?.sort((a: number, b: number) => a - b);
    for(let i = 0; i < a1?.length; i++) {
        if(a2[i] !== a1[i]*a1[i]) return false;
    }
    return true;
  }

  let a1: number[] = [16,72,86,75,46,87,44,63,85,94,18,27,77,43,46,86,37,23,44,31,84,32,79,65,25];
  let a2: number[] = [256,5184,7396,5625,2116,7569,1936,3969,7225,8836,324,729,5929,1849,2116,7396,1369,529,1936,961,7056,1024,6241,4225,625];
  console.log(comp(a1, a2));