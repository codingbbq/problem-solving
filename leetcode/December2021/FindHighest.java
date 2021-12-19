// https://leetcode.com/problems/find-the-highest-altitude/
// 1732. Find the Highest Altitude

public class FindHighest {
    public static void main(String[] args) {
        int[] gain = {-5,1,5,0,-7};
        FindHighest fh = new FindHighest();
        int answer = fh.largestAltitude(gain);
        System.out.println(answer);
    }
    public int largestAltitude(int[] gain) {
        int highest = 0;
        int start = 0;
        for(int i = 0; i < gain.length; i++) {
            start = start + gain[i];
            highest = Math.max(highest, start);
        }
        return highest;
    }
}
