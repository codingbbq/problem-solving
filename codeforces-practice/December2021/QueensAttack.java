// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class QueensAttack {
    static int MAX = 1000005;
    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int q = fs.nextInt();

        // Keep track of the x, y and the diagonals.
        boolean[] row = new boolean[MAX];
        boolean[] col = new boolean[MAX];
        boolean[] diagonalA = new boolean[MAX*2]; // row - col + n;
        boolean[] diagonalB = new boolean[MAX*2]; // row+col

        for(int i = 0; i < q; i++) {
            int r = fs.nextInt();
            int c = fs.nextInt();

            if(!row[r] && !col[c] && !diagonalA[r - c + n] && !diagonalB[r+c]) {
                System.out.println("YES");
                row[r] = true;
                col[c] = true;
                diagonalA[r - c + n] = true;
                diagonalB[r + c] = true;
            } else {
                System.out.println("NO");
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