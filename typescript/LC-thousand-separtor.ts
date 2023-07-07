// https://leetcode.com/problems/thousand-separator/
// 1556. Thousand Separator
{
    function thousandSeparator(n: number): string {
        let s = n.toString();
        let i = s.length - 1;
        let counter = 3;
        let str = "";
        while(i >= 0) {
            if(counter === 1 && i > 0) {
                str = "," + s[i] + str;
                counter = 3;
            } else {
                str = s[i] + str;
                counter--;
            }
            i--;
        }
        return str;
    };

    const n = 987;
    console.log(thousandSeparator(n));
}