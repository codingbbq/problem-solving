// https://leetcode.com/problems/divide-array-into-equal-pairs/
// 2206. Divide Array Into Equal Pairs

{
    function divideArray(nums: number[]): boolean {
        const lookup: { [key: string]: number } = {};
        nums.forEach((num) => {
            lookup[num] = (lookup[num] ?? 0) + 1;
        });

        for(let num in lookup) {
            if(lookup[num] % 2 !== 0) {
                return false;
            }
        }
        return true;
    };

    const nums = [1,3,2,3,2,2,2];
    console.log(divideArray(nums));
}