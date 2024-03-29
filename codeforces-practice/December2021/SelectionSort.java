// https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P26

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class SelectionSort {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int[] s = fs.readArray(n);

        for(int i = 0; i < n-1; i++) {
            int min = Integer.MAX_VALUE;
            int index = -1;
            for(int j = i; j < n; j++) {
                if(s[j] < min) {
                    index = j;
                    min = s[j];
                }
            }
            if(s[i] > min) {
                int temp = s[i];
                s[i] = s[index];
                s[index] = temp;
            }

            // To Print the array.
            for(int x = 0; x < n; x++) {
                System.out.print(s[x] + " ");
            }
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