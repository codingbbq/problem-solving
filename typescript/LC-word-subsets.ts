// https://leetcode.com/problems/word-subsets/
// 916. Word Subsets
{
    function wordSubsets(words1: string[], words2: string[]): string[] {
        let output: string[] = [];
        // store the occurrences of each character
        let charcount: number[] = new Array(26).fill(0);
        for(let i = 0; i < words2.length; i++) {
            const char = ocurrence(words2[i]);
            for(let j = 0; j < 26; j++) {
                charcount[j] = Math.max(charcount[j], char[j]);
            }
        }

        // Now loop through each of the words in word1 array and check
        for(let i = 0; i < words1.length; i++) {
            const w = ocurrence(words1[i]);
            let found: boolean = true;
            for(let x = 0; x < 26; x++) {
                if(w[x] < charcount[x]) {
                    found = false;
                    break;
                }
            }
            if(found) {
                output.push(words1[i]);
            }
        }

        return output;
    };

    function ocurrence(word: string): number[] {
        let c: number[] = new Array(26).fill(0);
        for(let i = 0; i < word.length; i++) {
            c[word[i].charCodeAt(0) - 'a'.charCodeAt(0)] += 1;
        }
        return c;
    }

    const words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["e","o"];
    console.log(wordSubsets(words1, words2));
}