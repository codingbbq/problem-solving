// https://www.codechef.com/submit/DISKMOV
// Distinct Numbers

import java.util.*;
import java.io.*;
import java.text.*;

class DistinctNumbers {

    void solve(int TC) throws Exception {
        int N = ni(), K = ni();
        int len = (2*N)+1;
        int[] A = new int[len];

        int max = 0;
        for(int i = 0; i < N; i++) {
            int x = ni();
            max = Math.max(max, x);
            A[x]++;
        }

        long sum = 0;
        int ind = 1;
        int c = 0;
        while(c < K){
            if(A[ind] == 0){
                sum += max - ind;
                c++;
            }
            ind++;
        }

        long ans2 = 0;
        if(max != len-1){
            ind = 1;
            c = 0;
            max = len-1;
            K--;
            while(c < K){
                if(A[ind] == 0){
                    ans2 += max - ind;
                    c++;
                }
                ind++;
            }
        }

        println(Math.max(sum, ans2));
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
        int T = (multipleTC) ? ni():1;
        for(int i = 1; i<= T; i++) {
            solve(i);
        }
        out.flush();
        out.close();
    }
    public static void main(String[] args) throws Exception{
        if(memory) new Thread(null, new Runnable() {public void run(){try{new DistinctNumbers().run();}catch(Exception e){e.printStackTrace();}}}, "1", 1 << 28).start();
        else new DistinctNumbers().run();
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