// https://leetcode.com/problems/arranging-coins/
// 441. Arranging Coins
{
    function arrangeCoins(n: number): number {
        let left: number = 1;
        let right: number = n;
        let k: number = 0;

        while (left <= right) {
            const mid: number = Math.floor(left + (right - left) / 2);
            const coins: number = ((mid + 1) * (mid  / 2));

            if (coins == n) return mid;

            if (coins < n) {
                left = mid + 1;
                k = mid;
            } else {
                right = mid - 1;
            }
        }

        return k;


        /*
        // Brute force - Simulation
        let res = n;
        for(let i = 1; i <= n; i++) {
            res -= i;
            if(res === 0) return i;
            if(res < 0) return i-1;
        }
        return 0;
        */
    };

    const n = 8;
    console.log(arrangeCoins(n));
}