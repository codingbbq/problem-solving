// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class PetyaAndStrings {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        String x = fs.next();
        String y = fs.next();

        x = x.toLowerCase();
        y = y.toLowerCase();
        int compare = x.compareTo(y);
        if(compare > 0) {
            System.out.println(1);
        }else if(compare < 0) {
            System.out.println(-1);
        }else{
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