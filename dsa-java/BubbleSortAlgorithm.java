/*
Bubble Sort
- In-Place algorithm
- O(n^2) time complexity - quadratic
- It will take 100 steps to sort 10 items, 10k steps to sort 100 items and so on
- Algorithm degrades quickly
 */

public class BubbleSortAlgorithm {
    public static void main(String[] args) {
        int[] intArray = { 20, 35, -15, 7, 55, 1, -22 };

        for(int lastIndex = intArray.length - 1; lastIndex > 0; lastIndex--) {
            for(int i = 0; i < lastIndex; i++) {
                if(intArray[i] > intArray[i+1]) {
                    swap(intArray, i, i+1);
                }
            }
        }

        for(int i = 0; i < intArray.length; i++) {
            System.out.print(intArray[i]);
            System.out.print(" ");
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
