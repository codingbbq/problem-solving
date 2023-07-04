// https://leetcode.com/problems/valid-parentheses/
// 20. Valid Parentheses
{
    function isValid(s: string): boolean {
        const stack: string[] = [];
        const lookup: { [key: string] : string } = {
            "(": ")",
            "[": "]",
            "{": "}"
        };
        for(let i = 0; i < s.length; i++) {
            let len = stack.length - 1;
            if(lookup[stack[len]] === s[i]) {
                stack.pop();
            } else {
                stack.push(s[i]);
            }
        }
        return stack.length === 0;
    };

    const s = "[()]{";
    console.log(isValid(s));
}