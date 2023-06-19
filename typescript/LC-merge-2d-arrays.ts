// 2570. Merge Two 2D Arrays by Summing Values
// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/
{
    function mergeArrays(nums1: number[][], nums2: number[][]): number[][] {
        const lookup: Map<number, number> = new Map<number, number>();

        for (let i = 0; i < nums1.length; i++) {
            const key = nums1[i][0];
            const value = nums1[i][1];
            lookup.set(key, value);
        }

        for (let i = 0; i < nums2.length; i++) {
            const key = nums2[i][0];
            const value = nums2[i][1];
            const val = lookup.get(key) ?? 0;
            lookup.set(key, val + value);
        }

        // Get all the keys from the Map and sort it.
        return [...lookup].sort((a, b) => a[0] - b[0]);
    };

    const nums1 = [[11,2],[2,3],[4,5]], nums2 = [[1,4],[3,2],[4,1]];
    console.log(mergeArrays(nums1, nums2));
}