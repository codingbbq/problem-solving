// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P05

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Football {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        String players = fs.next();

        int seq = 1;
        int max = 0;
        char first = players.charAt(0);

        for(int i = 1; i < players.length(); i++) {
            if(players.charAt(i) == first) {
                seq++;
                max = Math.max(seq, max);
            } else {
                first = players.charAt(i);
                seq = 1;
            }
            if(max >= 7) {
                System.out.println("YES");
                return;
            }
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