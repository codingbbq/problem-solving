// https://leetcode.com/problems/minimum-operations-to-make-array-equal/
// 1551. Minimum Operations to Make Array Equal
public class MinimumOperation {
    public static void main(String[] args) {
        int n = 3;
        MinimumOperation mo = new MinimumOperation();
        int ans = mo.minOperations(n);
        System.out.println(ans);
    }
    public int minOperations(int n) {
        // if n is odd, we want all numbers to be same as n/2
        // if n is even, first make the middle two elements same i.e one step.
        // then make all the numbers same as middle number.
        int middle = 0, step = 0, upto = 0;
        if(n%2 == 0) {
            middle = 2*(n/2);
            upto = n/2-1;
            step++;
        } else {
            middle = 2*(n/2)+1;
            upto = n/2;
        }

        for(int i = 0; i < upto; i++) {
            step += middle - ((2*i)+1);
        }
        return step;
    }
}
