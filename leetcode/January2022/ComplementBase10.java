// https://leetcode.com/problems/complement-of-base-10-integer/
// 1009. Complement of Base 10 Integer

public class ComplementBase10 {
    public static void main(String[] args) {
        int n = 5;
        ComplementBase10 cb = new ComplementBase10();
        int ans = cb.bitwiseComplement(n);
        System.out.println(ans);
    }

    public int bitwiseComplement(int n) {
        if(n == 0) return 1; // Checking for base case
        int res = 0;
        int fac = 1; // keep for 2 basically

        while(n != 0){
            // first we need to check what is our bit in 2 by taking modulo
            res += fac * (n % 2 == 0 ? 1 : 0);
            // res is the number convert back to decimal + factor * n % 2 if comes 0 then we take 1 otherwise 0 this is our complement

            fac *= 2;
            n /= 2;
        }
        return res;
    }
}
