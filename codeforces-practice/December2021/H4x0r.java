// https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/B

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class H4x0r {

    public static void main(String[] args) {
        // Setup the Mapping
        Map<Character, Character> code = new HashMap<Character, Character>();
        code.put('a', '4');
        code.put('i', '1');
        code.put('e', '3');
        code.put('o', '0');
        code.put('s', '5');

        FastScanner fs = new FastScanner();
        String s = fs.next();

        char[] x = s.toCharArray();
        for(int i = 0; i < x.length; i++) {
            if(code.containsKey(x[i])) {
                x[i] = code.get(x[i]);
            }
        }
        System.out.println(new String(x));
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