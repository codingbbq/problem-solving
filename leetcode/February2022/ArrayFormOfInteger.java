// https://leetcode.com/problems/add-to-array-form-of-integer/
// 989. Add to Array-Form of Integer

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class ArrayFormOfInteger {
    public static void main(String[] args) {
        int[] num = {1,2,6,3,0,7,1,7,1,9,7,5,6,6,4,4,0,0,6,3};
        int k = 516;
        ArrayFormOfInteger ai = new ArrayFormOfInteger();
        List<Integer> ans = ai.addToArrayForm(num, k);
        System.out.println(ans);
    }
    public List<Integer> addToArrayForm(int[] A, int K) {

        int N = A.length;
        int cur = K;
        List<Integer> ans = new ArrayList();

        int i = N;
        while (--i >= 0 || cur > 0) {
            if (i >= 0)
                cur += A[i];
            ans.add(cur % 10);
            cur /= 10;
        }

        Collections.reverse(ans);
        return ans;

    }
}
