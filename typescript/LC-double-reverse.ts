// https://leetcode.com/problems/a-number-after-a-double-reversal/
// 2119. A Number After a Double Reversal
{
    function isSameAfterReversals(num: number): boolean {
        return num > 9 && num % 10 === 0 ? false : true;
    };

    const num = 526;
    console.log(isSameAfterReversals(num));
}