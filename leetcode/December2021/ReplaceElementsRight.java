// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
// 1299. Replace Elements with Greatest Element on Right Side

import java.util.Arrays;

public class ReplaceElementsRight {
    public static void main(String[] args) {
        int[] arr = {17,18,5,4,6,1};
        ReplaceElementsRight re = new ReplaceElementsRight();
        int[] ans = re.replaceElements(arr);
        System.out.println(Arrays.toString(ans));
    }
    public int[] replaceElements(int[] arr) {
        // Traverse the array in reverse order.
        int high = arr[arr.length - 1];
        int curr = high;
        arr[arr.length-1] = -1;
        for(int i = arr.length-2; i >= 0; i--) {
            curr = arr[i];
            arr[i] = high;
            if(curr > high) {
                high = curr;
            }
        }
        return arr;
    }
}
