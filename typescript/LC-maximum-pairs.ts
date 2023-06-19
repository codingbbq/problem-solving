// 2341. Maximum Number of Pairs in Array
// https://leetcode.com/problems/maximum-number-of-pairs-in-array/

{
    type Tlookup = { [key: number]: number };
    function numberOfPairs(nums: number[]): number[] {
        // Use the javascript reduce method to build a lookup object.
        const lookup: Tlookup = nums.reduce((lookup, value) => ({
        ...lookup,
        [value]: (lookup[value] ?? 0) + 1,
        }), {} as Tlookup);

        let totalLeft = 0
        for(let x in lookup) {
            totalLeft += lookup[x] % 2;
        }
        return [(nums.length - totalLeft)/2, totalLeft];

        // Approach two
        /*
        const map = new Map<number, number>();
        nums.forEach((num) =>{
            let n = map.get(num) || 0;
            map.set(num, n + 1);
        });

        let totalLeft = 0;
        for(let [_, value] of map) {
            totalLeft += value % 2
        }
        return [(nums.length - totalLeft)/2, totalLeft];
        */
    };

    const nums = [1,3,2,1,3,2,2];
    console.log(numberOfPairs(nums));
}