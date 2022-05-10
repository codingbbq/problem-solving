/*
    Selection Sort
    - In-Place algorithm
    - O(n^2) time complexity
    - It will take 100 steps to sort 10 items and so on
    - Doesn't require as much swapping as bubble sort
 */

public class SelectionSortAlgorithm {
    public static void main(String[] args) {
        int[] intArray = { 20, 35, -15, 7, 55, 1, -22 };


        for(int lastIndex = intArray.length - 1; lastIndex > 0; lastIndex--) {
            int largestIndex = 0;
            for(int i = 1; i <= lastIndex; i++) {
                if(intArray[i] > intArray[largestIndex]) {
                    largestIndex = i;
                }
            }
            swap(intArray, largestIndex, lastIndex);
        }

        // Print the sorted array
        for(int i = 0; i < intArray.length; i++) {
            System.out.print(intArray[i] + " ");
        }
    }

    public static void swap(int[] array, int i, int j) {
        if(i == j) {
            return;
        }

        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
