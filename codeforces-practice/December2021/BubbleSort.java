// https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P24

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BubbleSort {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int[] b = fs.readArray(n);

        // Implement bubble sort
        for(int i = 0; i < n-1 ; i++) {
            for(int j = 0; j < n - 1; j++) {
                if(b[j] > b[j+1]) {
                    int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                }
                System.out.print(b[j] + " ");
            }
            // Print the last element
            System.out.print(b[n-1] + " ");
            System.out.println();
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