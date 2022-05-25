// https://leetcode.com/problems/calculate-digit-sum-of-a-string/
// 2243. Calculate Digit Sum of a String

public class CalculateDigitSum {
    public static void main(String[] args) {
        String s = "11111222223";
        int k = 3;
        CalculateDigitSum cs = new CalculateDigitSum();
        String ans = cs.digitSum(s, k);
        System.out.println(ans);
    }
    public String digitSum(String s, int k) {
        while(s.length() > k) {
            String news = "";
            for(int i = 0; i < s.length(); i+=k) {
                String t = s.substring(i, Math.min(s.length(), i+k));
                int sum = 0;
                for(int j = 0; j < t.length(); j++) {
                    sum += t.charAt(j) - '0';
                }
                news += sum + "";
            }
            s = news;
        }
        return s;
    }
}
