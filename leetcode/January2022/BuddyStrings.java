// https://leetcode.com/problems/buddy-strings/
// 859. Buddy Strings

public class BuddyStrings {
    public static void main(String[] args) {
        String s = "ab";
        String goal = "ba";
        BuddyStrings bs = new BuddyStrings();
        boolean ans = bs.buddyStrings(s, goal);
        System.out.println(ans);
    }
    public boolean buddyStrings(String s, String goal) {
        // Check if both the sting lengths are same
        if(s.length() != goal.length()) return false;

        // If both the strings are same then
        if(s.equals(goal)) {
            // We want to know if there are two same characters, so even if we swap them, then the resulting string will be same as goal
            int[] count = new int[26];
            for(int i = 0; i < s.length(); i++) {
                count[s.charAt(i) - 'a']++;
            }
            // Loop through the count
            for(int c : count) {
                if(c > 1) return true;
            }
            return false;
        } else {
            // Look for at least two strings that are mismatch
            int first = -1; int second = -1;
            for(int i = 0; i < s.length(); i++) {
                if(s.charAt(i) != goal.charAt(i)) {
                    if(first == -1) {
                        first = i;
                    } else if(second == -1) {
                        second = i;
                    } else {
                        return false;
                    }
                }
            }

            return (second != -1 && s.charAt(first) == goal.charAt(second) && s.charAt(second) == goal.charAt(first));
        }
    }
}
