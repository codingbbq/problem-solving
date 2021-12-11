// https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P53
// P53. The odd one's out (easy)

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class OddOneOut {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int[] a = fs.readArray(n);

        Map<Integer, Integer> f = new HashMap<Integer, Integer>();

        for(int i = 0; i < n; i++) {
            f.put(a[i], f.getOrDefault(a[i], 0) + 1);
        }
        // Loop through the map to get the odd fre
        for(Map.Entry<Integer, Integer> x : f.entrySet()) {
            if(x.getValue() % 2 != 0) {
                System.out.println(x.getKey());
                return;
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