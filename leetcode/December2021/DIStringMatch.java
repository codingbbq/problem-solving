import java.util.Arrays;

// https://leetcode.com/problems/di-string-match/
// 942. DI String Match
public class DIStringMatch {
    public static void main(String[] args) {
        String s = "DIDI";
        DIStringMatch di = new DIStringMatch();
        int[] ans = di.diStringMatch(s);
        System.out.println(Arrays.toString(ans));
    }
    public int[] diStringMatch(String s) {
        int N = s.length();
        int low = 0; int high = N;
        int[] ans = new int[N+1];
        for(int i = 0; i < N; i++) {
            if(s.charAt(i) == 'I') {
                ans[i] = low++;
            } else {
                ans[i] = high++;
            }
        }
        ans[N] = low;
        return ans;
    }
}
