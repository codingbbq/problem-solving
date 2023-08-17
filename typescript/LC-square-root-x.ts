// https://leetcode.com/problems/sqrtx/
// 69. Sqrt(x)
{
    function mySqrt(x: number): number {
        let low = 1;
        let high = x;
        let sqrt = 0;
        while(low <= high) {
            let mid = Math.floor(low + (high - low)/2);
            let square = mid * mid;
            if(square === x) {
                return mid;
            }
            if(square < x) {
                sqrt = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return sqrt;
    };

    const x = 5;
    console.log(mySqrt(x));
}