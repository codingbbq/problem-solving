/*
Shell Sort
- In place algorithm
- Worst case is O(n^2), but it can perform much better
- Does not require as much shifting so better than insertion sort
- Unstable algorithm
 */

public class ShellSortAlgorithm {
    public static void main(String[] args) {
        int[] intArray = { 20, 35, -15, 7, 55, 1, -22 };

        for(int gap = intArray.length/2; gap > 0; gap /= 2) {

            for(int i = gap; i < intArray.length; i++) {
                int newElement = intArray[i];

                int j = i;
                while(j >= gap && intArray[j - gap] > newElement) {
                    intArray[j] = intArray[j - gap];
                    j -= gap;
                }

                intArray[j] = newElement;
            }
        }


        // Print the array
        for(int i = 0; i < intArray.length; i++) {
            System.out.print(intArray[i] + " ");
        }
    }
}
