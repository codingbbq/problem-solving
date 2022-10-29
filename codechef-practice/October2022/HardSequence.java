// https://www.codechef.com/submit/HRDSEQ
// Hard Sequence

import java.util.*;
import java.io.*;
import java.text.*;

class HardSequence  {

    int[] infiniteArray() {
        Map<Integer, Integer> freq = new HashMap<>();
        int[] A = new int[128];
        A[0] = 0;
        A[1] = 0;
        freq.put(0, 0);
        for(int i = 2; i < A.length; i++) {
            if(freq.containsKey(A[i-1])) {
                A[i] = (i - 1) - freq.get(A[i-1]);
            } else {
                A[i] = 0;
            }
            freq.put(A[i-1], i-1);
        }
        // println(Arrays.toString(A));
        return A;
    }



    void solve(int TC, int[] A) throws Exception {
        int N = ni();
        int find = A[N-1];
        int count = 0;
        for(int i = 0; i <= N-1; i++) {
            if(A[i] == find) {
                count++;
            }
        }
        println(count);
    }

    long mod = (long)998244353, IINF = (long)1e17;
    final int MAX = (int)1e3+1, INF = (int)2e9, root = 3;
    DecimalFormat df = new DecimalFormat("0.0000000000000");
    double PI = 3.1415926535897932384626433832792884197169399375105820974944, eps = 1e-8;

    static boolean multipleTC = true, memory = false;

    FastReader in;
    PrintWriter out;

    void run() throws Exception{
        in = new FastReader();
        out = new PrintWriter(System.out);
        int[] A = infiniteArray();
        int T = (multipleTC) ? ni():1;
        for(int i = 1; i<= T; i++) {
            solve(i, A);
        }
        out.flush();
        out.close();
    }
    public static void main(String[] args) throws Exception{
        if(memory) new Thread(null, new Runnable() {public void run(){try{new HardSequence().run();}catch(Exception e){e.printStackTrace();}}}, "1", 1 << 28).start();
        else new HardSequence().run();
    }

    long gcd(long a, long b){ return (b==0)?a:gcd(b,a%b); }
    int gcd(int a, int b){return (b==0)?a:gcd(b,a%b);}
    int bit(long n){return (n==0)?0:(1+bit(n&(n-1)));}

    // Find factorial using recursion
    long factorial(long n){
        if (n == 0)
            return 1;
        else
            return(n * factorial(n-1));
    }

    // Print
    void print(Object o){out.print(o);}

    // Print next line
    void println(Object o){out.println(o);}

    void pni(Object o){out.println(o);out.flush();}

    // String next
    String ns(){return in.next();}
    // String new line
    String nsln(){return in.nextLine();}

    // Integer
    int ni(){return Integer.parseInt(in.next());}
    // Long
    long nl(){return Long.parseLong(in.next());}
    // Double
    double nd(){return Double.parseDouble(in.next());}

    class FastReader {
        BufferedReader br;
        StringTokenizer st;
        public FastReader(){
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        public FastReader(String s) throws Exception{
            br = new BufferedReader(new FileReader(s));
        }

        String next(){
            while (st == null || !st.hasMoreElements()){
                try{
                    st = new StringTokenizer(br.readLine());
                }catch (IOException  e){
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        String nextLine(){
            String str = "";
            try{
                str = br.readLine();
            }catch (IOException e){
                e.printStackTrace();
            }
            return str;
        }
    }
}