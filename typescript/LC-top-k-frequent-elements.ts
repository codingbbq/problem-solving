// https://leetcode.com/problems/top-k-frequent-elements/
// 347. Top K Frequent Elements

{
    function topKFrequent(nums: number[], k: number): number[] {
        const lookup: { [key: string]: number } = {};
        nums.forEach((num) => {
            lookup[num] = (lookup[num] ?? 0) + 1;
        });

        console.log(lookup)

        const bucket: number[][] = new Array(nums.length + 1);
        for(let item in lookup) {
            bucket[lookup[item]] = (bucket[lookup[item]] ?? []).concat(Number(item));
        }

        const output: number[] = [];
        for(let i = bucket.length - 1; i >= 0; i--) {
            let contents = bucket[i];
            if(!contents) continue;
            for(let x = 0; x < contents.length; x++) {
                output.push(contents[x]);
                if(output.length >= k) return output;
            }
        }
        return [];
    };

    const nums = [1,1,1,2,2,3], k = 2;
    console.log(topKFrequent(nums, k));
}