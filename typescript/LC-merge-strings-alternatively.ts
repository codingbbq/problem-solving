// https://leetcode.com/problems/merge-strings-alternately/
// 1768. Merge Strings Alternately
{
    function mergeAlternately(word1: string, word2: string): string {
        let output: string = "";
        let len = Math.min(word1.length, word2.length);
        for(let i = 0; i < len; i++) {
            output += word1[i];
            output += word2[i];
        }
        output += word1.slice(len);
        output += word2.slice(len);

        return output;
    };

    const word1 = "abc", word2 = "pqr";
    console.log(mergeAlternately(word1, word2));
}