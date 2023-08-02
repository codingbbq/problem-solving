// https://leetcode.com/problems/length-of-last-word/
// 58. Length of Last Word
{
    function lengthOfLastWord(s: string): number {
        let last = s.trim().split(' ').pop() || '';
        return last.length;
    };

    const s = "Hello World";
    console.log(lengthOfLastWord(s));
}