// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
// 2124. Check if All A's Appears Before All B's

public class CheckABeforeB {
    public static void main(String[] args) {
        String s = "bbb";
        CheckABeforeB cb = new CheckABeforeB();
        boolean ans = cb.checkString(s);
        System.out.println(ans);
    }
    public boolean checkString(String s) {
        int b = -1;
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == 'b' && b == -1) {
                b = i; // Found b at index i
            }
            if(s.charAt(i) == 'a' && (b != -1 && i > b)) {
                return false; // a found after b, invalid condition
            }
        }

        // For all other conditions, return true
        return true;
    }
}
