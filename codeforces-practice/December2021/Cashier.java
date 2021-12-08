// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P08

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Cashier {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt(); // Customers
        int L = fs.nextInt(); // minutes of work in day
        int a = fs.nextInt(); // Smoke breaks

        int free = 0;
        int total = 0;
        for(int i = 0; i < n; i++) {
            int t = fs.nextInt();
            int l = fs.nextInt();
            total+= (t - free) / a;
            free = t+l;
        }
        // Free time
        total += (L - free)/a;
        System.out.println(total);
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