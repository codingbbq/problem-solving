// 2729. Check if The Number is Fascinating
// https://leetcode.com/problems/check-if-the-number-is-fascinating/
{
    function isFascinating(n: number): boolean {
        let num = n.toString();
        if(num.indexOf('0') >= 0) return false;
        num += (2*n).toString() + (3*n).toString();
        return num.length === 9 && num.split('').sort().join('') === '123456789';
    };

    const n = 192;
    console.log(isFascinating(n));
}