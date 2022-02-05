// https://www.codewars.com/kata/5656b6906de340bd1b0000ac/solutions/typescript
// Two to One
export class G964 {
   
    public static longest = (s1: string, s2: string) => {
        let newStrArr: string[] = `${s1}${s2}`.split("").sort();
        let newStr = "";
        newStr += newStrArr[0];
        for(let i = 1; i < newStrArr.length; i++) {
            if(newStrArr[i-1] === newStrArr[i]) continue;
            newStr += newStrArr[i];
        }
        return newStr;
    }    
}

const s1 = "xyaabbbccccdefww";
const s2 = "xxxxyyyyabklmopq";
console.log(G964.longest(s1, s2));