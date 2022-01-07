// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
// 1790. Check if One String Swap Can Make Strings Equal

public class AlmostEqualStrings {
    public static void main(String[] args) {
        String s1 = "knob";
        String s2 = "bnok";
        AlmostEqualStrings as = new AlmostEqualStrings();
        boolean ans = as.areAlmostEqual(s1, s2);
        System.out.println(ans);
    }
    public boolean areAlmostEqual(String s1, String s2) {
        // If both the strings are equal
        if(s1.equals(s2)) return true;

        // Both the strings are of different length, it will never be equal
        if(s1.length() != s2.length()) return false;

        // Look for exactly 2 characters to swap
        int first = -1; int second = -1;
        for(int i = 0; i < s1.length(); i++) {
            if(s1.charAt(i) != s2.charAt(i)) {
                if(first == -1) {
                    first = i;
                } else if(second == -1) {
                    second = i;
                } else {
                    // More than 2 characters are different
                    return false;
                }
            }
        }

        return (second != -1 && s1.charAt(first) == s2.charAt(second) && s1.charAt(second) == s2.charAt(first));

    }
}
