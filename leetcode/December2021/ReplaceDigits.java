// https://leetcode.com/problems/replace-all-digits-with-characters/
// 1844. Replace All Digits with Characters

public class ReplaceDigits {
    public static void main(String[] args) {
        String s = "a1c1e1";
        ReplaceDigits rd = new ReplaceDigits();
        String ans = rd.replaceDigits(s);
        System.out.println(ans);
    }
    public char shift(char c, int x) {
        return (char)(c+x);
    }
    public String replaceDigits(String s) {
        for(int i = 1; i < s.length(); i=i+2) {
            char output = shift(s.charAt(i-1), Integer.parseInt(Character.toString(s.charAt(i))));
            s = s.substring(0, i) + output + s.substring(i+1, s.length());
        }
        return s;
    }
}
