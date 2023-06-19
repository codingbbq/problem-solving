// https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/
// 2586. Count the Number of Vowel Strings in Range

{
    
    const lookup: {[key: string]: boolean} = {
        'a': true,
        'e': true,
        'i': true,
        'o': true,
        'u': true
    };

    function vowelStrings(words: string[], left: number, right: number): number {
        let count = 0;
        for(let i = left; i <= right; i++) {
            let word = words[i];
            if(lookup[word[0]] && lookup[word[word.length - 1]]) {
                count++;
            }
        }
        return count;
    };

    const words = ["are","amy","u"], left = 0, right = 2;
    console.log(vowelStrings(words, left, right));
}