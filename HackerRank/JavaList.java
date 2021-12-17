// https://www.hackerrank.com/challenges/java-list/problem?isFullScreen=true

import java.util.*;

public class JavaList {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        List<Integer> list = new ArrayList<>(n);

        for(int i = 0; i < n; i++) {
            list.add(scan.nextInt());
        }

        int q = scan.nextInt(); // Queries

        // Perform operations
        for(int i = 0; i < 2*q; i++) {
            String query = scan.nextLine();
            // System.out.println(query);
            if(query.equals("Insert")) {
                int index = scan.nextInt();
                int element = scan.nextInt();

                list.add(index, element);
            }

            if(query.equals("Delete")) {
                int index = scan.nextInt();
                list.remove(index);
            }
        }

        for(int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + " ");
        }

    }
}
