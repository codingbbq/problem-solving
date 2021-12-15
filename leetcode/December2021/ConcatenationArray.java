import java.util.Arrays;

// https://leetcode.com/problems/concatenation-of-array/
// Concatenation Array
public class ConcatenationArray {
    public static void main(String[] args) {
        int[] nums = {1,2,1};
        ConcatenationArray ca = new ConcatenationArray();
        int[] answer = ca.getConcatenation(nums);
        System.out.println(Arrays.toString(answer));
    }

    public int[] getConcatenation(int[] nums) {
        int n = nums.length*2;
        int[] answer = new int[n];
        int x = 0;
        for(int i = 0; i < n; i++) {
            if(i == nums.length) {
                x = 0;
            }
            answer[i] = nums[x];
            x++;
        }

        return answer;
    }
}
