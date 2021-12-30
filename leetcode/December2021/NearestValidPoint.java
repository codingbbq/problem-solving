// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
// 1779. Find Nearest Point That Has the Same X or Y Coordinate

public class NearestValidPoint {
    public static void main(String[] args) {
        int x = 3, y = 4;
        int[][] points = {{1,2},{3,1},{2,4},{2,3},{4,4}};
        NearestValidPoint np = new NearestValidPoint();
        int ans = np.nearestValidPoint(x, y, points);
        System.out.println(ans);
    }
    public int nearestValidPoint(int x, int y, int[][] points) {
        int min = Integer.MAX_VALUE;
        int index = -1;
        for(int i = 0; i < points.length; i++) {
            if(points[i][0] == x || points[i][1] == y) {
                if((Math.abs(x - points[i][0]) + Math.abs(y - points[i][1])) < min) {
                    min = Math.abs(x - points[i][0]) + Math.abs(y - points[i][1]);
                    index = i;
                }

            }
        }
        return index;
    }
}
