// https://leetcode.com/problems/count-asterisks/
// 2315. Count Asterisks
{
    function countAsterisks(s: string): number {
        let barCount = 0;
        let asteriskCount = 0;
        for(let i = 0; i < s.length; i++) {
            if(s[i] === '|') barCount++;
            if(barCount % 2 === 0 && s[i] === '*') asteriskCount++; 
        }
        return asteriskCount;
    };

    const s = "yo|uar|e**|b|e***au|tifu|l";
    console.log(countAsterisks(s));
}