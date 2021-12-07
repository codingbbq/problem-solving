// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Candies {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int[] a = new int[n];

        for(int i = 0; i < n; i++) {
            a[i] = fs.nextInt();
        }

        int x = fs.nextInt();
        int y = fs.nextInt();

        int sum = 0;
        for(int i = x; i <= y; i++) {
            sum+=a[i];
        }
        System.out.println(sum);
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