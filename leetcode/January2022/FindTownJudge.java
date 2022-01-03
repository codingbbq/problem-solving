// https://leetcode.com/problems/find-the-town-judge/
// 997. Find the Town Judge

public class FindTownJudge {
    public static void main(String[] args) {
        int n = 1;
        int[][] trust = {};
        FindTownJudge fj = new FindTownJudge();
        int ans = fj.findJudge(n, trust);
        System.out.println(ans);
    }
    public int findJudge(int n, int[][] trust) {
        int[] arr = new int[n+1];

        for(int i = 0; i < trust.length; i++) {
            arr[trust[i][0]]--;
            arr[trust[i][1]]++;
        }

        for(int i = 1; i <= n; i++) {
            if(arr[i] == n-1) return i;
        }
        return -1;
    }
}
