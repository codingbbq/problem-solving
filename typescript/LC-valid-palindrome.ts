// https://leetcode.com/problems/valid-palindrome/
// 125. Valid Palindrome
{
    function isPalindrome(s: string): boolean {
        // let str = "";
        // for(let i = 0; i < s.length; i++) {
        //     let char = s[i].toLocaleLowerCase();
        //     if(/^[a-z0-9]$/.test(char)) {
        //         str += char;
        //     };
        // }

        const str = s.replace(/[^a-zA-Z0-9]/g, '').toLowerCase();

        let start = 0;
        let end = str.length - 1;
        while(start < end) {
            if(str[start] != str[end]) return false;
            start++;
            end--;
        }
        return true;
    };

    const s = " "
    console.log(isPalindrome(s));
}