// https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3/train/typescript
// Abbreviate a Two Word Name

export function abbrevName(name: string): string {
    return name.split(" ").map((item) => item[0].toUpperCase()).join(".");
}

console.log(abbrevName("Sam Harris"));