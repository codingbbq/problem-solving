// https://codeforces.com/problemset/problem/491/A
// A. Up the hill

// Wrong answer, the output on the problem page is different from the test. Gave up on this one.

import java.util.*;
import java.io.*;
import java.text.*;

public class UpTheHill {

    void solve(int TC) throws Exception {
        int A = ni(), B = ni();
        int N = A + B + 1;
        // First go up the hill
        if(A == 0) {
            // Go down the hill
            for(int i = N; i >= B; i--) {
                print(i + " ");
            }
        } else if(B == 0) {
            // Just go up the hill
            for(int i = 1; i <= N; i++) {
                print(i + " ");
            }
        } else {
            // Some steps to go up
            int startUp = 1;
            int startDown = 1 + B;
            print(startUp + " ");

            int s = startDown+1 + A;
            for(int i = startDown+1; i < s; i++) {
                print(i + " ");
            }
            // Some steps to go down
            for(int i = startDown; i >= startDown + B - 1; i--) {
                print(i + " ");
            }
        }
    }

    long mod = (long)998244353, IINF = (long)1e17;
    final int MAX = (int)1e3+1, INF = (int)2e9, root = 3;
    DecimalFormat df = new DecimalFormat("0.0000000000000");
    double PI = 3.1415926535897932384626433832792884197169399375105820974944, eps = 1e-8;

    static boolean multipleTC = false, memory = false;

    FastReader in;
    PrintWriter out;

    void run() throws Exception{
        in = new FastReader();
        out = new PrintWriter(System.out);
        int T = (multipleTC) ? ni():1;
        for(int i = 1; i<= T; i++) {
            solve(i);
        }
        out.flush();
        out.close();
    }
    public static void main(String[] args) throws Exception{
        if(memory) new Thread(null, new Runnable() {public void run(){try{new UpTheHill().run();}catch(Exception e){e.printStackTrace();}}}, "1", 1 << 28).start();
        else new UpTheHill().run();
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