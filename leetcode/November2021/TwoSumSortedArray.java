import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
public class TwoSumSortedArray {
    public static void main(String[] args) {

        int[] numbers = {-1, 0};
        int target = -1;

        TwoSumSortedArray tsa = new TwoSumSortedArray();
        int[] a = tsa.twoSum(numbers, target);
        System.out.println(Arrays.toString(a));

    }

    public int[] twoSum(int[] numbers, int target) {
        Map<Integer, Integer> a = new HashMap<>();

        for(int i = 0; i < numbers.length; i++) {
            int x = target - numbers[i];
            if(a.containsKey(x)) {
                return new int[] {a.get(x), i+1};
            } else {
                a.put(numbers[i], i+1);
            }
        }

        return new int[] {};

    }
}
