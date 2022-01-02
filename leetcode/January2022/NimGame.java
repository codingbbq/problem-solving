// https://leetcode.com/problems/nim-game/
// 292. Nim Game

public class NimGame {
    public static void main(String[] args) {
        int n = 4;
        NimGame ng = new NimGame();
        boolean ans = ng.canWinNim(n);
        System.out.println(ans);
    }
    public boolean canWinNim(int n) {
        return (n%4 != 0);
    }
}
