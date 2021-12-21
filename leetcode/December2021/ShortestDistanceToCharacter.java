// https://leetcode.com/problems/shortest-distance-to-a-character/
// 821. Shortest Distance to a Character
// Solution copied from the solutions, need to redo this.
// ToDo
import java.util.Arrays;

public class ShortestDistanceToCharacter {
    public static void main(String[] args) {
        String S = "loveleetcode";
        char C = 'e';
        ShortestDistanceToCharacter sd = new ShortestDistanceToCharacter();
        int[] ans = sd.shortestToChar(S, C);
        System.out.println(Arrays.toString(ans));
    }

    public int[] shortestToChar(String s, char c) {
        int N = s.length();
        int[] ans = new int[N];
        int prev = Integer.MIN_VALUE / 2;

        for (int i = 0; i < N; ++i) {
            if (s.charAt(i) == c) prev = i;
            ans[i] = i - prev;
        }

        prev = Integer.MAX_VALUE / 2;
        for (int i = N-1; i >= 0; --i) {
            if (s.charAt(i) == c) prev = i;
            ans[i] = Math.min(ans[i], prev - i);
        }

        return ans;
    }
}
