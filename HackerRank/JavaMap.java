// https://www.hackerrank.com/challenges/phone-book/problem?isFullScreen=true

import java.util.HashMap;
import java.util.Scanner;

public class JavaMap {
    public static void main(String[] args) {

        HashMap<String, Integer> phone_book = new HashMap<>();

        Scanner in = new Scanner(System.in);
        int n=in.nextInt();
        in.nextLine();
        for(int i=0;i<n;i++)
        {
            String name=in.nextLine();
            int phone=in.nextInt();
            phone_book.put(name, phone);
            in.nextLine();
        }
        while(in.hasNext())
        {
            String query=in.nextLine();
            if(phone_book.containsKey(query)) {
                System.out.println(query+"="+phone_book.get(query));
            } else {
                System.out.println("not found");
            }
        }

        in.close();
    }
}
