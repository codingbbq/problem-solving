// https://leetcode.com/problems/distribute-candies/

import java.util.HashSet;
import java.util.Set;

public class DistributeCandies {

    public static void main(String[] args) {
        int[] candyTypes = {1,1,2,3};

        DistributeCandies dc = new DistributeCandies();
        int types = dc.distributeCandies(candyTypes);
        System.out.println(types);
    }

    public int distributeCandies(int[] candyType) {

        // Use set to store all the unique types
        Set<Integer> candy = new HashSet<Integer>();

        for(int i = 0; i < candyType.length; i++) {
            candy.add(candyType[i]);
        }

        return Math.min(candyType.length/2, candy.size());
    }
}
