// https://codeforces.com/group/yg7WhsFsAp/contest/355493/problem/P15

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class LuckyDivision {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        for(int i = 1; i <= n; i++) {
            boolean checkLucky = CheckLucky(i);
            if(checkLucky && n%i == 0) {
                System.out.println("YES");
                return;
            }
        }
        System.out.println("NO");
    }

    private static boolean CheckLucky(int n) {
        boolean lucky = true;
        while(n > 0) {
            int x = n%10;
            if(x != 7 && x != 4) {
                lucky = false;
                break;
            }
            n /= 10;
        }
        return lucky;
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