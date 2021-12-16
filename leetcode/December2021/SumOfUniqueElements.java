// https://leetcode.com/problems/sum-of-unique-elements/
// 1748. Sum of Unique Elements

import java.util.HashMap;
import java.util.Map;

public class SumOfUniqueElements {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4,5};
        SumOfUniqueElements se = new SumOfUniqueElements();
        int answer = se.sumOfUnique(nums);
        System.out.println(answer);
    }
    public int sumOfUnique(int[] nums) {
        Map<Integer, Integer> f = new HashMap<Integer, Integer>();
        for(int x : nums) {
            f.put(x, f.getOrDefault(x, 0)+1);
        }
        int sum = 0;
        for(int y : f.keySet()) {
            if(f.get(y) == 1) {
                sum+=y;
            }
        }
        return sum;
    }
}
