/*
Insertion Sort
- In place algorithm
- O(n^2) time complexity - quadratic
- It will take 100 steps to sort 10 items and so on
- Stable algorithm
 */

public class InsertionSortAlgorithm {
    public static void main(String[] args) {
        int[] intArray = { 20, 35, -15, 7, 55, 1, -22 };

        for(int firstUnsortedIndex = 1; firstUnsortedIndex < intArray.length; firstUnsortedIndex++) {
            int newElement = intArray[firstUnsortedIndex];

            int i;
            for(i = firstUnsortedIndex; i > 0 && intArray[i - 1] > newElement; i--) {
                intArray[i] = intArray[i-1];
            }

            intArray[i] = newElement;
        }

        // Print the array
        for(int i = 0; i < intArray.length; i++) {
            System.out.print(intArray[i] + " ");
        }
    }
}
