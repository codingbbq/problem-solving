// https://leetcode.com/problems/rings-and-rods/
// 2103. Rings and Rods

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class RingsAndRods {
    public static void main(String[] args) {
        String rings = "G4";
        RingsAndRods rr = new RingsAndRods();
        int count = rr.countPoints(rings);
        System.out.println(count);
    }
    public int countPoints(String rings) {
        // Store the rod and the rings
        Map<Character, String> rods = new HashMap<Character, String>();
        // If all the rings are found, then store the rod in a set
        Set<Character> found = new HashSet<Character>();

        // Loop through the rings
        char[] r = rings.toCharArray();
        for(int i = 0; i < r.length - 1; i=i+2) {
            rods.put(r[i+1], rods.getOrDefault(r[i+1], "")+r[i]);
            if(rods.get(r[i+1]).contains("R") && rods.get(r[i+1]).contains("B") && rods.get(r[i+1]).contains("G")) {
                found.add(r[i+1]);
            }
        }
        return found.size();
    }
}
