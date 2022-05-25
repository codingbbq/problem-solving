// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
// 1910. Remove All Occurrences of a Substring

public class RemoveAllOccurrences {
    public static void main(String[] args) {
        String s = "axxxxyyyyb";
        String part = "xy";
        RemoveAllOccurrences ro = new RemoveAllOccurrences();
        String ans = ro.removeOccurrences(s, part);
        System.out.println(ans);
    }
    public String removeOccurrences(String s, String part) {
        int l = part.length();

        while(s.indexOf(part) != -1) {
            int fromIndex = s.indexOf(part);
            s = s.substring(0, fromIndex) + s.substring(fromIndex + l);
        }
        return s;
    }
}
