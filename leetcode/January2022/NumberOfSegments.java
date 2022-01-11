// https://leetcode.com/problems/number-of-segments-in-a-string/
// 434. Number of Segments in a String

public class NumberOfSegments {
    public static void main(String[] args) {
        String s = "";
        NumberOfSegments ns = new NumberOfSegments();
        int ans = ns.countSegments(s);
        System.out.println(ans);
    }
    public int countSegments(String s) {
        String t = s.trim();
        if(t.equals("")) return 0;
        return t.split("\\s+").length;
    }
}
