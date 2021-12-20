// https://leetcode.com/problems/daily-temperatures/
// 739. Daily Temperatures

// Could figure out brute force, but took solution from leetcode
import java.util.Arrays;

public class DailyTemperatures {
    public static void main(String[] args) {
        int[] temperatures = {73,74,75,71,69,72,76,73};
        DailyTemperatures dt = new DailyTemperatures();
        int[] d = dt.dailyTemperatures(temperatures);
        System.out.println(Arrays.toString(d));
    }
    public int[] dailyTemperatures(int[] temperatures) {
        int N = temperatures.length;
        int[] ans = new int[N];
        int hottest = 0;

        for(int i = N-1; i >= 0; i--) {
            int currentTemp = temperatures[i];
            if(currentTemp >= hottest) {
                hottest = currentTemp;
                continue;
            }

            int days = 1;
            while(temperatures[i+days] <= currentTemp) {
                days += ans[i+days];
            }
            ans[i] = days;
        }
        return ans;
    }
}
