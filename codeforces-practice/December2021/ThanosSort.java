// https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P33

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class ThanosSort {

    public static int answer = 0;

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int[] a = fs.readArray(n);
        destructArray(a);
        System.out.println(answer);
    }

    public static void destructArray(int[] x) {
        if(is_sorted(x)) {
            answer = Math.max(answer, x.length);
            return;
        }
        int n = x.length;
        int[] leftArray = Arrays.copyOfRange(x,0, n/2);
        destructArray(leftArray);
        int[] rightArray = Arrays.copyOfRange(x, n/2, n);
        destructArray(rightArray);
    }

    // Check if the array is sorted
    public static boolean is_sorted(int[] a) {
        for(int i = 0; i < a.length - 1; i++) {
            if(a[i] > a[i+1]) {
                return false;
            }
        }
        return true;
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