// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// 167. Two Sum II - Input Array Is Sorted
{
    function twoSum(numbers: number[], target: number): number[] {
        let start = 0;
        let end = numbers.length - 1;
        while(start < end) {
            let t = numbers[start] + numbers[end];
            if(t < target) {
                start++;
            } else if(t > target) {
                end--;
            } else {
                return [start+1, end+1];
            }
        }
        return [-1, -1];
    };

    const numbers = [2,7,11,15], target = 9;
    console.log(twoSum(numbers, target));
}