// https://leetcode.com/problems/valid-anagram/
// 242. Valid Anagram
{
    function isAnagram(s: string, t: string): boolean {
        // if(s.length !== t.length) return false;
        // return s.split('').sort().join('') === t.split('').sort().join('');

        if(s.length !== t.length) return false;
        const sMap = {}, tMap = {};
        for(let i = 0; i < s.length; i++) {
            sMap[s[i]] = (sMap[s[i]] ?? 0) + 1;
            tMap[t[i]] = (tMap[t[i]] ?? 0) + 1;
        }

        // Loop through the maps.
        for(let item in sMap) {
            if(sMap[item] !== tMap[item]) return false;
        }
        return true;

    };

    const s = "anagram", t = "nagaram";
    console.log(isAnagram(s, t));
}