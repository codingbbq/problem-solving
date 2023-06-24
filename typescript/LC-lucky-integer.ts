// https://leetcode.com/problems/find-lucky-integer-in-an-array/
// 1394. Find Lucky Integer in an Array

{
    function findLucky(arr: number[]): number {
        const frequency: { [key: number]: number } = {};
        arr.forEach((item) => {
            frequency[item] = (frequency[item] ?? 0) + 1;
        });

        let lucky = -1;
        for(const key in frequency) {
            if(Number(key) === frequency[key]) {
                lucky = Math.max(lucky, frequency[key]);
            }
        }
        return lucky;
    };

    const arr = [2,2,2,3,3];
    console.log(findLucky(arr));
}