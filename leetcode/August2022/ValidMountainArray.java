// https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3251/

public class ValidMountainArray {
    public static void main(String[] args) {
        int[] arr = { 0,3,2,1 };
        ValidMountainArray vm = new ValidMountainArray();
        boolean ans = vm.validMountainArray(arr);
        System.out.println(ans);
    }

    public boolean validMountainArray(int[] arr) {
        // Simulate
        int i = 0;
        int N = arr.length;

        // Go up
        while(i+1 < N && arr[i+1] > arr[i]) {
            i++;
        }

        // Check for peak and it should not be the 0th element or the last element
        if(i==0 || i == N-1) {
            return false;
        }

        // Reached peak, now go down
        while(i+1 < N && arr[i+1] < arr[i]) {
            i++;
        }

        return i == N-1;

    }
}
