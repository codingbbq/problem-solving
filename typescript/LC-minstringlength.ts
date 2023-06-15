// https://leetcode.com/problems/minimum-string-length-after-removing-substrings/
// 2696. Minimum String Length After Removing Substrings

// Notes : Use the stack to add and remove the characters.
{
    function minLength(s: string): number {
        const stack: string[] = [];
        for(let i = 0; i < s.length; i++) {
            // Check for AB
            let len = stack.length - 1;
            if(s[i] === 'B' && stack[len] === 'A') {
                stack.pop();
            } else if(s[i] === 'D' && stack[len] === 'C') {
                stack.pop();
            } else {
                stack.push(s[i]);
            }
        }
        return stack.length;
    };

    const s = "ABFCACDB";
    console.log(minLength(s));
}