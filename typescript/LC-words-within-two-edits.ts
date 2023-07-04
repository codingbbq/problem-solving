// https://leetcode.com/problems/words-within-two-edits-of-dictionary/
// 2452. Words Within Two Edits of Dictionary
{

    function twoEditWords(queries: string[], dictionary: string[]): string[] {
        let output: string[] = [];
        for(let i = 0; i < queries.length; i++) {
            for(let j = 0; j < dictionary.length; j++) {
                if(strCompare(queries[i], dictionary[j])) {
                    output.push(queries[i]);
                }
            }
        }
        return output
    };

    function strCompare(str1: string, str2: string): boolean {
        let diff: number = 0;
        for(let i = 0; i < str1.length; i++) {
            if(str1[i] !== str2[i]) {
                diff++;
                if(diff > 2) break;
            }
        }

        return diff > 2 ? false : true;
    }

    const queries = ["yes"], dictionary = ["not"];
    console.log(twoEditWords(queries, dictionary));
}