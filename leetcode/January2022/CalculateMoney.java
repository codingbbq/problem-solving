// https://leetcode.com/problems/calculate-money-in-leetcode-bank/
// 1716. Calculate Money in Leetcode Bank

public class CalculateMoney {
    public static void main(String[] args) {
        int n = 4;
        CalculateMoney cm = new CalculateMoney();
        int ans = cm.totalMoney(n);
        System.out.println(ans);
    }
    public int totalMoney(int n) {
        int start = 1;
        int currentDay = start;
        int total = 0;
        for(int i = 1; i <= n; i++) {
            total+= currentDay;
            if(i%7==0){
                start = start+1;
                currentDay = start;
                continue;
            }
            currentDay = currentDay+1;
        }
        return total;
    }
}
