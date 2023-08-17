// https://leetcode.com/problems/valid-perfect-square/
// 367. Valid Perfect Square
// https://youtu.be/5JkkuZFP1b8
{
    function isPerfectSquare(num: number): boolean {
        let low = 0;
        let high = num;
        while(low <= high) {
            let mid = Math.floor(low + (high - low)/2);
            let square = mid * mid;
            if(square === num) return true;
            if(square > num) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return false;
    };

    const num = 16;
    console.log(isPerfectSquare(num));
}