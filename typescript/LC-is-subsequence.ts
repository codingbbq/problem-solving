// https://leetcode.com/problems/is-subsequence
// 392. Is Subsequence
{
    function isSubsequence(s: string, t: string): boolean {
        let i = 0;
        let j = 0;
        while(i < s.length && j < t.length) {
            if(s[i] === t[j]) {
                i++;
            }
            j++;
        }
        return i === s.length;
    };

    const s = "abc", t = "ahbgdc";
    console.log(isSubsequence(s, t));
}