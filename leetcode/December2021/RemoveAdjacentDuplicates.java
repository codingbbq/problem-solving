// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

import java.util.Stack;

public class RemoveAdjacentDuplicates {

    public static void main(String[] args) {
        String s = "abbaca";
        RemoveAdjacentDuplicates rad = new RemoveAdjacentDuplicates();
        String answer = rad.removeDuplicates(s);
        System.out.println(answer);
    }

    public String removeDuplicates(String s) {
        // Use stack to keep track of the adjacent duplicates
        Stack<Character> x = new Stack<Character>();

        // Convert the string to character array so we can loop
        char[] source = s.toCharArray();

        // Loop through the array
        for(int i = 0; i < source.length; i++) {
            if(x.empty()) {
                x.push(source[i]);
            } else {
                if(source[i] == x.peek()) {
                    x.pop();
                } else {
                    x.push(source[i]);
                }
            }
        }

        // Loop through the stack and print what has remained.
        String a = "";
        for(int i = 0; i < x.size(); i++) {
            a += x.get(i);
        }

        return a;

    }

}
