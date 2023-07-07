// https://leetcode.com/problems/merge-sorted-array/description/
// 88. Merge Sorted Array
{
    /**
     Do not return anything, modify nums1 in-place instead.
    */
    function merge(nums1: number[], m: number, nums2: number[], n: number): void {
        let i = m-1;
        let j = n-1;
        let k = m+n-1;

        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }

        while(i>=0){
            nums1[k]=nums1[i];
            i--;
            k--;
        }
        while(j>=0){
            nums1[k]=nums2[j];
            j--;
            k--;
        } 
        console.log(nums1);
    };

    const nums1 = [0,0,0,0,0], m = 0, nums2 = [1,2,3,4,5], n = 5;
    merge(nums1, m, nums2, n);
}