// https://leetcode.com/problems/minimize-string-length/description/
// 2716. Minimize String Length
{
    function minimizedStringLength(s: string): number {
        return new Set(s).size;
    };
    
    const s = "aaabc";
    console.log(minimizedStringLength(s));
}