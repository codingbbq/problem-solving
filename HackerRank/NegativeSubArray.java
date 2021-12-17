import java.util.Scanner;

public class NegativeSubArray {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        int[] a = new int[n];

        for(int i = 0; i < n; i++) {
            a[i] = scan.nextInt();
        }

        scan.close();

        int count = 0;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum+=a[j];
                if(sum < 0) {
                    count++;
                }
            }
        }

        System.out.println(count);

    }

}

/*
Input
5
1 -2 4 -5 1

Output
9
 */