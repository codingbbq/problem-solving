// https://leetcode.com/problems/backspace-string-compare/
// 844. Backspace String Compare

import java.util.Stack;

public class BackSpaceStringCompare {
    public static void main(String[] args) {
        String s = "a##c";
        String t = "#a#c";
        BackSpaceStringCompare bc = new BackSpaceStringCompare();
        boolean ans = bc.backspaceCompare(s,t);
        System.out.println(ans);
    }
    public boolean backspaceCompare(String s, String t) {
        s = finalString(s);
        t = finalString(t);
        return s.equals(t);
    }

    public static String finalString(String z) {
        // Use stack to get the exact typed characters.
        Stack<Character> stack = new Stack<Character>();
        for(char x : z.toCharArray()) {
            if(x == '#') {
                if(!stack.isEmpty()) stack.pop();
            } else {
                stack.push(x);
            }
        }
        return stack.toString();
    }
}
