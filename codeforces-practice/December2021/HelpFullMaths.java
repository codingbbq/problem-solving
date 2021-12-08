// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P06

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class HelpFullMaths {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        String m = fs.next();

        Map<Character, Integer> stat = new HashMap<Character, Integer>();
        for(int i = 0; i < m.length(); i = i+2) {
            stat.put(m.charAt(i), stat.getOrDefault(m.charAt(i), 0) + 1);
        }

        // 1, 2 or 3 are the only numbers
        String output = "";
        for(int i = 0; i < stat.getOrDefault('1', 0); i++) {
            output+="1+";
        }
        for(int i = 0; i < stat.getOrDefault('2', 0); i++) {
            output+="2+";
        }
        for(int i = 0; i < stat.getOrDefault('3', 0); i++) {
            output+="3+";
        }
        //Remove the last '+' character from output
        output = output.substring(0, output.length()-1);
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