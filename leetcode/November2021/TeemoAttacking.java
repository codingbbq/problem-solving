// https://leetcode.com/problems/teemo-attacking/

public class TeemoAttacking {

    public static void main(String[] args) {
        int[] timeSeries = {1,2};
        int duration = 2;

        TeemoAttacking ta = new TeemoAttacking();
        int time = ta.findPoisonedDuration(timeSeries, duration);
        System.out.println(time);
    }

    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int n = timeSeries.length;
        if (n == 0) return 0;

        int total = 0;
        for(int i = 0; i < n - 1; ++i)
            total += Math.min(timeSeries[i + 1] - timeSeries[i], duration);
        return total + duration;
    }
}
