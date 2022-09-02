// https://www.codechef.com/submit/SLAB
// Tax Slab


import java.util.*;
import java.io.*;
import java.text.*;

class TaxSlab {

    void solve(int TC) throws Exception {
        int n = ni();
        int tax = 0;
        if(n>250000)
            tax += ( (Math.min(500000,n)-250000)*5 )/100;
        if(n>500000)
            tax += ( (Math.min(750000,n)-500000)*10 )/100;
        if(n>750000)
            tax += ( (Math.min(1000000,n)-750000)*15 )/100;
        if(n>1000000)
            tax += ( (Math.min(1250000,n)-1000000)*20 )/100;
        if(n>1250000)
            tax += ( (Math.min(1500000,n)-1250000)*25 )/100;
        if(n>1500000)
            tax += ( (n-1500000)*30 )/100;

        println(n - tax);
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
        if(memory) new Thread(null, new Runnable() {public void run(){try{new TaxSlab().run();}catch(Exception e){e.printStackTrace();}}}, "1", 1 << 28).start();
        else new TaxSlab().run();
    }

    long gcd(long a, long b){ return (b==0)?a:gcd(b,a%b); }
    int gcd(int a, int b){return (b==0)?a:gcd(b,a%b);}
    int bit(long n){return (n==0)?0:(1+bit(n&(n-1)));}

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