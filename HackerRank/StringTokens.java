import java.util.Scanner;

public class StringTokens {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        if (s.trim().length()==0 || s.trim().length()>400000)
        {
            System.out.println(0);
            return;
        }

        String[] sp = s.trim().split("[!,?._'@\\s]+");
        System.out.println(sp.length);
        for(int i = 0; i < sp.length; i++) {
            System.out.println(sp[i]);
        }
        scan.close();
    }
}
