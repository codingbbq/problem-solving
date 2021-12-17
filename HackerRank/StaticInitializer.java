import java.util.Scanner;

public class StaticInitializer {

    public static boolean flag = initialize();
    public static int B;
    public static int H;

    private static boolean initialize() {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        sc.close();

        if (x > 0 && y > 0) {
            B = x;
            H = y;
            return true;
        } else {
            System.out.println("java.lang.Exception: Breadth and height must be positive");
            return false;
        }

    }


    public static void main(String[] args) {
        if(flag) {
            int area = B*H;
            System.out.println(area);
        }
    }
}
