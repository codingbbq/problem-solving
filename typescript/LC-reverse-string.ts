// https://leetcode.com/problems/reverse-string/description/
// 344. Reverse String
{
    /**
        Do not return anything, modify s in-place instead.
    */
    function reverseString(s: string[]): void {
        let [start, end] = [0, s.length - 1];
        while(start < end) {
            [s[start], s[end]] = [s[end], s[start]];
            start++;
            end--;
        }
        console.log(s);
    };

    const s = ["h","e","l","l","o"];
    reverseString(s)
}