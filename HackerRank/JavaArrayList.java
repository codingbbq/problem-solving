// https://www.hackerrank.com/challenges/java-arraylist/problem?isFullScreen=true

import java.util.ArrayList;
import java.util.Scanner;

public class JavaArrayList {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        ArrayList[] data = new ArrayList[n];

        for(int i = 0; i < n; i++) {
            data[i] = new ArrayList();
            int d = scan.nextInt();
            for(int j = 0; j < d; j++) {
                data[i].add(scan.nextInt());
            }
        }

        int q = scan.nextInt(); // queries.
        for(int k = 0; k < q; k++) {
            int x = scan.nextInt();
            int y = scan.nextInt();

            try{
                System.out.println(data[x-1].get(y-1));
            } catch (Exception e){
                System.out.println("ERROR!");
            }

        }

        scan.close();

    }
}
