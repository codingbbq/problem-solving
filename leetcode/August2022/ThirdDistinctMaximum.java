// https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3231/


public class ThirdDistinctMaximum {
    public static void main(String[] args) {
        int[] nums = { 2,2,3,1 };
        ThirdDistinctMaximum tm = new ThirdDistinctMaximum();
        int ans = tm.thirdMax(nums);
        System.out.println(ans);
    }
    public int thirdMax(int[] nums) {

        // Store all the distincts in an array
        Integer[] distinct = { null, null, null }; // Since elements can be negative, we use the null reference

        for(Integer n : nums) {

            // Discard repeated elements
            if(n.equals(distinct[0]) || n.equals(distinct[1]) || n.equals(distinct[2])) continue;

            if(distinct[0] == null || n > distinct[0]) {
                distinct[2] = distinct[1];
                distinct[1] = distinct[0];
                distinct[0] = n;
            } else if(distinct[1] == null || n > distinct[1]) {
                distinct[2] = distinct[1];
                distinct[1] = n;
            } else if(distinct[2] == null || n > distinct[2]) {
                distinct[2] = n;
            }
        }
        return distinct[2] == null ? distinct[0] : distinct[2];
    }
}
