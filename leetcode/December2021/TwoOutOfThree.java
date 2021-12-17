// https://leetcode.com/problems/two-out-of-three/
// 2032. Two Out of Three

import java.util.*;

public class TwoOutOfThree {
    public static void main(String[] args) {
        int[] nums1 = {1,2,2};
        int[] nums2 = {4,3,3};
        int[] nums3 = {5};
        TwoOutOfThree tt = new TwoOutOfThree();
        List<Integer> answer = tt.twoOutOfThree(nums1, nums2, nums3);
        System.out.println(answer);
    }
    public List<Integer> twoOutOfThree(int[] nums1, int[] nums2, int[] nums3) {
        List<Integer> answer = new ArrayList<Integer>();
        Map<Integer, String> occur = new HashMap<Integer, String>();
        String test = "";
        for(int x : nums1) {
            test = occur.getOrDefault(x, "");
            occur.put(x, test+"1");
        }
        for(int y : nums2) {
            test = occur.getOrDefault(y, "");
            occur.put(y, test+"2");
        }
        for(int z : nums3) {
            test = occur.getOrDefault(z, "");
            occur.put(z, test+"3");
        }
        for(Integer a : occur.keySet()) {
            if(occur.get(a).contains("12") || occur.get(a).contains("13") || occur.get(a).contains("23")) {
                answer.add(a);
            }
        }
        return answer;
    }
}
