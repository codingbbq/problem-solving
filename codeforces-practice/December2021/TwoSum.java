// https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/A
// 2 Sum problem

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class TwoSum {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int x = fs.nextInt();
        int[] a = fs.readArray(n);
        Map<Integer, Integer> arrayMap = new HashMap<Integer, Integer>();

        for(int i = 0; i < a.length; i++) {
            int component = x - a[i];
            if(arrayMap.containsKey(component) && i != arrayMap.get(component)) {
                System.out.println("YES");
                return;
            }
            arrayMap.put(a[i], i);
        }

        System.out.println("NO");

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