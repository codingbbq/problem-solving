// https://leetcode.com/problems/two-furthest-houses-with-different-colors/
// 2078. Two Furthest Houses With Different Colors

public class FarthestHouses {
    public static void main(String[] args) {
        int[] colors = {4,4,4,11,4,4,11,4,4,4,4,4};
        FarthestHouses fh = new FarthestHouses();
        int ans = fh.maxDistance(colors);
        System.out.println(ans);
    }
    public int maxDistance(int[] colors) {
        int maxDistance = 0;
        for(int x = 0; x < colors.length; x++) {
            for(int i = colors.length - 1; i > 0; i--) {
                if(colors[x] != colors[i]) {
                    maxDistance = Math.max(maxDistance, Math.abs(x-i));
                    break;
                }
            }
        }

        return maxDistance;
    }
}
