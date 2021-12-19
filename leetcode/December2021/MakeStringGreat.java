// https://leetcode.com/problems/make-the-string-great/
// 1544. Make The String Great

import java.util.Stack;

public class MakeStringGreat {
    public static void main(String[] args) {
        String s = "leEeetcode";
        MakeStringGreat msg = new MakeStringGreat();
        String ans = msg.makeGood(s);
        System.out.println(ans);
    }
    public String makeGood(String s) {
        Stack<String> check = new Stack<String>();
        for(int i = 0; i < s.length(); i++) {
            if(i!=0 && !(check.peek().equals(Character.toString(s.charAt(i)))) && (check.peek().equalsIgnoreCase(Character.toString(s.charAt(i))))) {
                check.pop();
            } else {
                check.push(Character.toString(s.charAt(i)));
            }
        }
        String ans = "";
        for(String x : check) {
            ans+=x;
        }
        return ans;
    }
}
