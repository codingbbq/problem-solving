// https://leetcode.com/problems/group-anagrams/
// 49. Group Anagrams

{
    function groupAnagrams(strs: string[]): string[][] {
        const map: { [key: string] : string[] } = {};
        strs.forEach((str) => {
            const freqArr: number[] = new Array(26).fill(0);
            for(let i = 0; i < str.length; i++) {
                freqArr[str[i].charCodeAt(0) - 97] += 1;
            }
            let key: string = freqArr.toString();
            map[key] = (map[key] ?? []).concat(str);
        });
        
        const output: string[][] = [];
        for(let item in map) {
            output.push(map[item]);
        }
        return output;
    };

    const strs = [""];
    console.log(groupAnagrams(strs));
}