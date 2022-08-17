// https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3245/

import java.util.Arrays;

public class DuplicateZeroes {
    public static void main(String[] args) {
        int[] arr = { 1,0,2,3,0,4,5,0 };
        DuplicateZeroes dz = new DuplicateZeroes();
        dz.duplicateZeros(arr);
        System.out.println(Arrays.toString(arr));
    }

    public void duplicateZeros(int[] arr) {
        for(int i = 0; i < arr.length; i++) {
            if(arr[i] == 0) {
                updateArr(arr, i);

                if(i+1 < arr.length) {
                    arr[i+1] = 0;
                }

                i++;
            }
        }
    }

    public void updateArr(int[] arr, int index) {
        for(int j = arr.length - 2; j > index; j--) {
            arr[j+1] = arr[j];
        }
    }

}
