// https://leetcode.com/problems/alternating-digit-sum/
// 2544. Alternating Digit Sum

{
    function alternateDigitSum(n: number): number {
        // const output = n.toString().split('').reduce((result, current, index) => {
        //     return index % 2 == 0 ? (result += Number(current)) : result -= Number(current) 
        // }, 0);
        // return output;

        let sign = 1, res = 0;
        for (; n; n = Math.floor(n/10)) {
            sign *= -1;
            res += sign * n % 10;
        }
        return sign * res;
    };

    const n = 886996;
    console.log(alternateDigitSum(n));
}