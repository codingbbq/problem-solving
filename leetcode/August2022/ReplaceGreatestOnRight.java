// https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3259/

import java.util.Arrays;

public class ReplaceGreatestOnRight {
    public static void main(String[] args) {
        int[] arr = { 400 };
        ReplaceGreatestOnRight rr = new ReplaceGreatestOnRight();
        int[] ans = rr.replaceElements(arr);
        System.out.println(Arrays.toString(ans));
    }
    public int[] replaceElements(int[] arr) {
        for(int i = 0; i < arr.length; i++) {
            arr[i] = greatestEle(i+1, arr);
        }
        return arr;
    }

    // Function to find the rightmost greatest element
    public int greatestEle(int index, int[] arr) {
        int greatest = -1;
        for(int i = index; i < arr.length; i++) {
            if(arr[i] > greatest) {
                greatest = arr[i];
            }
        }
        return greatest;
    }
}
