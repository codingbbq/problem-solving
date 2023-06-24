// https://leetcode.com/problems/first-letter-to-appear-twice/
// 2351. First Letter to Appear Twice

{
    function repeatedCharacter(s: string): string {
        // const letter: number[] = new Array(26).fill(0);
        // for(let i = 0; i < s.length; i++) {
        //     let index = s[i].charCodeAt(0) - 'a'.charCodeAt(0);
        //     letter[index]++;
        //     if(letter[index] > 1) return s[i];
        // }
        // return '';

        let map: { [key: string]: string } = {};
        for(let i = 0; i < s.length; i++) {
            if(s[i] in map) {
                return s[i];
            }
            map[s[i]] = s[i];
        }
        return '';
    };

    const s = "abccbaacz";
    console.log(repeatedCharacter(s));
}