// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P07

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.Set;
import java.util.StringTokenizer;

public class StringTask {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        String tasks = fs.next();

        // First convert to lowercase
        tasks = tasks.toLowerCase();

        // Store the vowels
        Set<Character> v = new HashSet<Character>();
        v.add('a');
        v.add('e');
        v.add('i');
        v.add('o');
        v.add('u');
        v.add('y');

        String output = "";
        for(int i = 0; i < tasks.length(); i++) {
            if(!v.contains(tasks.charAt(i))) {
                output+="."+tasks.charAt(i);
            }
        }
        System.out.println(output);
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