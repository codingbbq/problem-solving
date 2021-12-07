// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class ReverseArray {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int size = fs.nextInt();
        int[] a = new int[size];
        for(int i = 0; i < size; i++) {
            a[i] = fs.nextInt();
        }

        for(int i = a.length - 1; i >= 0; i--) {
            System.out.print(a[i] + " ");
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