// https://leetcode.com/problems/valid-palindrome-ii/description/
// 680. Valid Palindrome II
{
    function validPalindrome(s: string): boolean {
        let i = 0;
        let j = s.length - 1;
        while(i < j) {
            if(s[i] !== s[j]) {
                return palindrome(s, i+1, j) || palindrome(s, i, j-1);
            }
            i++;
            j--;
        }
        return true;
    };

    function palindrome(s: string, i: number, j: number): boolean {
        while(i < j) {
            if(s[i] !== s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    const s = "aba";
    console.log(validPalindrome(s));
}