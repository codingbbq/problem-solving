// https://leetcode.com/problems/determine-color-of-a-chessboard-square/
// 1812. Determine Color of a Chessboard Square

public class ColorOfChessBoardSquare {
    public static void main(String[] args) {
        String coordinates = "h3";
        ColorOfChessBoardSquare cs = new ColorOfChessBoardSquare();
        boolean answer = cs.squareIsWhite(coordinates);
        System.out.println(answer);
    }
    public boolean squareIsWhite(String coordinates) {
        // if both the coordinates are even or both are odd, then it is black else it is white.
        char[] co = coordinates.toCharArray();
        int x = co[0] - 97;
        int y = Integer.parseInt(Character.toString(co[1]));
        if((x%2==0 && y%2==0) || (x%2!=0 && y%2!=0)) {
            return true;
        }else {
            return false;
        }
    }
}
