// https://leetcode.com/problems/longest-common-prefix/

function longestCommonPrefix(strs: string[]): string {
    let str = "";
    if(strs.length <= 0) return str;

    let temp = strs[0];
    let isValid = true;
    for(let i = 0; i < temp.length; i++) {
        for(let j = 1; j < strs.length; j++) {
            if(temp[i] !== strs[j][i]) isValid = false;
        }
        if(isValid) {
            str += temp[i];
        } else {
            break;
        }
    }
    return str;
};

const strs = ["flower","flow","flight"];
console.log(longestCommonPrefix(strs));