// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P03

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class WayTooLong {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        while(n > 0) {
            String s = fs.next();
            if(s.length() <= 10){
                System.out.println(s);
            } else {
                System.out.println(s.charAt(0) + String.valueOf(s.length() - 2) + s.charAt(s.length() - 1));
            }
            n--;
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