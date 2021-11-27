// https://leetcode.com/problems/merge-sorted-array/

import java.util.Arrays;

public class MergeSortedArray {

    public static void main(String[] args) {

        int[] nums1 = {1,2,3,0,0,0};
        int m = 3;
        int[] nums2 = {2,5,6};
        int n = 3;

        MergeSortedArray msa = new MergeSortedArray();
        msa.merge(nums1, m, nums2, n);
    }

    public void merge(int[] nums1, int m, int[] nums2, int n) {

        int index = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        while(j >= 0 && i >= 0) {
            if(nums2[j] >= nums1[i]) {
                nums1[index] = nums2[j];
                index--;
                j--;
            } else {
                nums1[index] = nums1[i];
                index--;
                i--;
            }
        }

        while(j >= 0) {
            nums1[index] = nums2[j];
            index--;
            j--;
        }

        System.out.println(Arrays.toString(nums1));

    }

}
