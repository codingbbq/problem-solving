// https://leetcode.com/problems/baseball-game/
// Baseball game

import java.util.Stack;

public class BaseBallGame {

    public static void main(String[] args) {
        String[] ops = {"5","2","C","D","+"};

        BaseBallGame bg = new BaseBallGame();
        int answer = bg.calPoints(ops);
        System.out.println(answer);
    }

    public int calPoints(String[] ops) {
        int answer = 0;
        Stack<Integer> o = new Stack<Integer>();

        for(int i = 0; i < ops.length; i++) {
            switch (ops[i]) {
                case "C":
                    o.pop();
                    break;
                case "D":
                    o.push(2 * o.peek().intValue());
                    break;
                case "+":
                    o.push(o.peek().intValue() + o.get(o.size()-2).intValue());
                    break;
                default:
                    o.push(Integer.parseInt(ops[i]));
                    break;
            }
        }

        for(int i = 0; i < o.size(); i++) {
            answer+=o.get(i);
        }

        return answer;
    }
}
