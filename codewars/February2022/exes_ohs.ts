// https://www.codewars.com/kata/55908aad6620c066bc00002a/train/typescript
// Exes and Ohs

export function xo(str: string) {
    const XO = { x: 0, o: 0 };
    for(let i = 0; i < str.length; i++) {
        if(str[i].toLowerCase() === "x") XO.x = XO.x+1;
        if(str[i].toLowerCase() === "o") XO.o = XO.o+1; 
    }
    if(XO.x === XO.o) return true;
    return false;
}

console.log(xo("ooxx"));
console.log(xo("console.log(xooxx"));
console.log(xo("ooxXm"));
console.log(xo("zpzpzpp"));
console.log(xo("zzoo"));