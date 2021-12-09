// https://codeforces.com/group/yg7WhsFsAp/contest/355493/problem/P14

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class NearlyLuckyNumber {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        Long n = Long.valueOf(fs.next());
        int count = 0;
        while(n > 0) {
            Long x = n%10;
            if(x == 7 || x == 4) {
                count++;
            }
            n = n/10;
        }
        if(count == 7 || count == 4) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
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