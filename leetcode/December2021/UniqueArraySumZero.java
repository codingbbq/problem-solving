// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
// 1304. Find N Unique Integers Sum up to Zero

import java.util.Arrays;

public class UniqueArraySumZero {
    public static void main(String[] args) {
        int n = 5;
        UniqueArraySumZero usz = new UniqueArraySumZero();
        int[] answer = usz.sumZero(n);
        System.out.println(Arrays.toString(answer));
    }
    public int[] sumZero(int n) {
        int[] answer = new int[n];
        int sum = 0;
        for(int i = 0; i < n-1; i++) {
            sum+=i+1;
            answer[i] = i+1;
        }
        answer[n-1] = -sum;
        return answer;
    }
}
