// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class ShuffleHashing {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();

        for(int i = 0; i < n; i++) {
            String p = fs.next();
            String h = fs.next();

            boolean check = CheckHashWithPassword(p, h);
            if(check) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

    public static boolean CheckHashWithPassword(String p, String h) {

        // If the hash length is lesser than password, reject it.
        if(p.length() > h.length()) return false;

        // Convert P into char array, sort it and then check with H
        String sortedP = SortString(p);

        // Loop over the H string one by one.
        for(int i = 0; i <= h.length() - p.length(); i++) {
            String hash = h.substring(i, p.length()+i);
            String sortedH = SortString(hash);
            if(sortedP.equals(sortedH)) {
                return true;
            }
        }
        return false;
    }

    public static String SortString(String x) {
        // Convert x to char array
        char[] raw = x.toCharArray();
        Arrays.sort(raw);
        return new String(raw);
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