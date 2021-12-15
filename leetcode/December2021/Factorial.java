// Recursion

public class Factorial {
    public static void main(String[] args) {
        int a = fac(5);
        System.out.println(a);
    }

    public static int fac(int n) {
        if(n == 0) {
            return 1;
        } else {
            return n*fac(n-1);
        }
    }
}
