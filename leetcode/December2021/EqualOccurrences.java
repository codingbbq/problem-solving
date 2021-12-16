// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
// 1941. Check if All Characters Have Equal Number of Occurrences

import java.util.HashMap;
import java.util.Map;

public class EqualOccurrences {
    public static void main(String[] args) {
        String s = "aaabb";
        EqualOccurrences eo = new EqualOccurrences();
        boolean answer = eo.areOccurrencesEqual(s);
        System.out.println(answer);
    }

    public boolean areOccurrencesEqual(String s) {
        // Convert string to char array.
        char[] e = s.toCharArray();

        // Use a map to store the frequency
        Map<Character, Integer> occur = new HashMap<Character, Integer>();
        for(int i = 0; i < e.length; i++) {
            occur.put(e[i], occur.getOrDefault(e[i], 0)+1);
        }

        int check = 0;
        // Loop through the map to find if the frequency are same or different.
        for(Map.Entry<Character, Integer> o : occur.entrySet()) {
            if(check == 0) {
                // Setting the very first frequency so that it can be compared.
                check = o.getValue();
            } else {
                if(o.getValue() != check) {
                    return false;
                }
            }
        }
        return true;
    }
}
