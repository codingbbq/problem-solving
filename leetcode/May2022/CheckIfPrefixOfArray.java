// https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/
// 1961. Check If String Is a Prefix of Array

public class CheckIfPrefixOfArray {
    public static void main(String[] args) {
        String s = "iloveleetcode";
        String[] words = {"i","love","leetcode"};
        CheckIfPrefixOfArray ca = new CheckIfPrefixOfArray();
        boolean ans = ca.isPrefixString(s, words);
        System.out.println(ans);
    }

    public boolean isPrefixString(String s, String[] words) {
        String check = "";
        for(String x : words) {
            check += x;
            if(s.equals(check)) {
                return true;
            }
            if(s.indexOf(check) == -1) {
                return false;
            }
        }
        return false;
    }
}
