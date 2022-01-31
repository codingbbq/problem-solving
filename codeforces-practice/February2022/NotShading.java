// https://codeforces.com/problemset/problem/1627/A

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class NotShading {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int t = fs.nextInt();
        for(int i = 0; i < t; i++) {
            int n = fs.nextInt();
            int m = fs.nextInt();
            int r = fs.nextInt();
            int c = fs.nextInt();

            char[][] grid = new char[n][m];
            int rCount = 0;
            boolean checkBlack = false;
            for(int j = 0; j < n; j++) {
                String row = fs.next();
                for(int x = 0; x < row.length(); x++) {
                    grid[rCount][x] = row.charAt(x);
                    if(row.charAt(x) == 'B') {
                        checkBlack = true;
                    }
                }
                rCount++;
            }

            int ans = 2;
            // If not possible
            if(checkBlack == false) {
                ans = -1;
            } else {
                // Already black
                if(grid[r-1][c-1] == 'B') {
                    ans = 0;
                } else {
                    // Check if r has at least one black
                    for(int a = 0; a < m; a++) {
                        if(grid[r-1][a] == 'B') {
                            ans = 1;
                        }
                    }
                    // Check if c has at least one black
                    for(int a = 0; a < n; a++) {
                        if(grid[a][c-1] == 'B') {
                            ans = 1;
                        }
                    }
                }
            }

            // print the answer
            System.out.println(ans);
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