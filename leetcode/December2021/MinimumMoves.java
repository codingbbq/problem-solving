// https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/
// 2037. Minimum Number of Moves to Seat Everyone

import java.util.Arrays;

public class MinimumMoves {
    public static void main(String[] args) {
        int[] seats = {4,1,5,9};
        int[] studends = {1,3,2,6};

        MinimumMoves mm = new MinimumMoves();
        int answer = mm.minMovesToSeat(seats, studends);
        System.out.println(answer);
    }
    public int minMovesToSeat(int[] seats, int[] students) {
        // Sort both seats and students.
        Arrays.sort(seats);
        Arrays.sort(students);
        int count = 0;
        for(int i = 0; i < seats.length; i++) {
            count+=Math.abs(seats[i] - students[i]);
        }
        return count;
    }
}
