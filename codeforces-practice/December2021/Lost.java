// https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P55
// Lost

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class Lost {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int[] a = fs.readArray(n);

        // Store the array in a map with its key and index
        Map<Integer, Integer> arr = new HashMap<Integer, Integer>();
        for(int i = 0; i < n; i++) {
            arr.put(a[i], i);
        }

        //Queries
        int q = fs.nextInt();
        for(int i = 0; i < q; i++) {
            int find = fs.nextInt();
            if(arr.containsKey(find)) {
                System.out.println(arr.get(find));
            } else {
                System.out.println(-1);
            }
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