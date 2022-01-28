// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
// 1217. Minimum Cost to Move Chips to The Same Position

public class CostToMoveChips {
    public static void main(String[] args) {
        int[] position = {2,2,2,3,3};
        CostToMoveChips cc = new CostToMoveChips();
        int ans = cc.minCostToMoveChips(position);
        System.out.println(ans);
    }

    public int minCostToMoveChips(int[] position) {
        int evn_cnt = 0;
        int odd_cnt = 0;
        for(int i : position) {
            if(i % 2 == 0) {
                evn_cnt++;
            } else {
                odd_cnt++;
            }
        }
        return Math.min(evn_cnt, odd_cnt);
    }
}
