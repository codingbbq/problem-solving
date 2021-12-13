// https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/C
// Square of Sticks
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class SquareOfSticks {

    public static void main(String[] args) {
        // sort the numbers in increasing order and take square of the 4th last number.

        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        long[] a = fs.readLongArray(n);
        if(a.length > 3){
            Arrays.sort(a);
            System.out.println(a[a.length - 4]*a[a.length - 4]);
        } else {
            System.out.println(0);
        }

    }

    static class FastScanner {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer("");
        public String next() {
            while (!st.hasMoreElements())
                try {
                    st=new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        int[] readArray(int n) {
            int[] a=new int[n];
            for (int i=0; i<n; i++) a[i]=nextInt();
            return a;
        }
        long[] readLongArray(int n) {
            long[] a=new long[n];
            for (int i=0; i<n; i++) a[i]=nextLong();
            return a;
        }
        long nextLong() {
            return Long.parseLong(next());
        }
    }

}