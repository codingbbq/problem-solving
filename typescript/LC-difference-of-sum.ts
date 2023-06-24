// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
// 2535. Difference Between Element Sum and Digit Sum of an Array

{
    function differenceOfSum(nums: number[]): number {
        let elementSum = 0;
        let digitSum = 0;
        nums.forEach((num) => {
            digitSum += num;
            elementSum += num.toString().split('').reduce((result, current) => {
                return result + Number(current);
            }, 0);
        });
        return Math.abs(digitSum - elementSum);
    };

    const nums = [1,15,6,3];
    console.log(differenceOfSum(nums));
}