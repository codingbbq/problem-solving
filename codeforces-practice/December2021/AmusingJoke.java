// https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/D

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class AmusingJoke {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        String guest = fs.next();
        String host = fs.next();

        String jumbled = fs.next();
        Map<Character, Integer> s = new HashMap<Character, Integer>();

        char[] g = guest.toCharArray();

        for(int i = 0; i < g.length; i++) {
            s.put(g[i], s.getOrDefault(g[i],0)+1);
        }

        char[] h = host.toCharArray();
        for(int i = 0; i < h.length; i++) {
            s.put(h[i], s.getOrDefault(h[i], 0)+1);
        }

        Map<Character, Integer> d = new HashMap<Character, Integer>();

        char[] j = jumbled.toCharArray();
        for(int i = 0; i < j.length; i++) {
            d.put(j[i], d.getOrDefault(j[i], 0)+1);
        }

        if(d.size() == s.size()) {
            for(Map.Entry<Character, Integer> x : d.entrySet()) {
                if(!d.get(x.getKey()).equals(s.get(x.getKey()))){
                    System.out.println("NO");
                    return;
                }
            }
            System.out.println("YES");
            return;
        } else{
            System.out.println("NO");
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