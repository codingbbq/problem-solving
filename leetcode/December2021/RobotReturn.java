// https://leetcode.com/problems/robot-return-to-origin/
// 657. Robot Return to Origin

public class RobotReturn {
    public static void main(String[] args) {
        String moves = "UD";
        RobotReturn rr = new RobotReturn();
        boolean ans = rr.judgeCircle(moves);
        System.out.println(ans);
    }
    public boolean judgeCircle(String moves) {
        int N = moves.length();
        int x = 0, y = 0;
        for(int i = 0; i < N; i++) {
            switch (moves.charAt(i)) {
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
                case 'R':
                    x++;
                    break;
                case 'L':
                    x--;
                    break;
            }
        }
        return (x==0 && y==0);
    }
}
