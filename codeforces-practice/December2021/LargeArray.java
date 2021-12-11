// https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P52

// This solution has failed
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class LargeArray {

    public static class IndexStore {
        private int startIndex;
        private int endIndex;

        IndexStore(int s, int e) {
            this.startIndex = s;
            this.endIndex = e;
        }

        public int getStart() {
            return this.startIndex;
        }

        public int getEnd() {
            return this.endIndex;
        }

        public void setStart(int s) {
            this.startIndex = s;
        }

        public void setEnd(int e) {
            this.endIndex = e;
        }
    }

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int[] a = fs.readArray(n);

        // Map to keep count of the frequency
        Map<Integer, Integer> freq = new HashMap<Integer, Integer>();

        // Create an array list and store the start and end index of the key
        IndexStore[] store = new IndexStore[10000000];

        for(int i = 0; i < a.length; i++) {
            if(freq.containsKey(a[i])) {
                freq.put(a[i], freq.get(a[i])+1);
                store[a[i]].setEnd(i+1);
            } else {
                freq.put(a[i], 1);
                store[a[i]] = new IndexStore(i+1, i+1);
            }
        }

        int maxCount = 0;
        int key = 0;
        int diff = n;
        for(Map.Entry<Integer, Integer> e : freq.entrySet()) {
            if(e.getValue() >= maxCount) {
                if(store[e.getKey()].getEnd() - store[e.getKey()].getStart() <= diff) {
                    maxCount = e.getValue();
                    key = e.getKey();
                }
            }
        }

        System.out.println(store[key].getStart() + " " + store[key].getEnd());

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