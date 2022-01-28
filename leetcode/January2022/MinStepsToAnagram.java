// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/
// 1347. Minimum Number of Steps to Make Two Strings Anagram

import java.util.HashMap;
import java.util.Map;

public class MinStepsToAnagram {
    public static void main(String[] args) {
        String s = "leetcode";
        String t = "practice";
        MinStepsToAnagram ma = new MinStepsToAnagram();
        int ans = ma.minSteps(s, t);
        System.out.println(ans);
    }
    public int minSteps(String s, String t) {
        Map<Character, Integer> sMap = new HashMap<Character, Integer>();
        for(char x : s.toCharArray()) {
            sMap.put(x, sMap.getOrDefault(x, 0)+1);
        }

        Map<Character, Integer> tMap = new HashMap<Character, Integer>();
        for(char y : t.toCharArray()) {
            tMap.put(y, tMap.getOrDefault(y, 0)+1);
        }

        int steps = 0;
        for(Map.Entry<Character, Integer> X : sMap.entrySet()) {
            if(tMap.containsKey(X.getKey())) {
                if(sMap.get(X.getKey()) > tMap.get(X.getKey())) {
                    steps += sMap.get(X.getKey()) - tMap.get(X.getKey());
                }
            } else {
                steps += sMap.get(X.getKey());
            }
        }
        return steps;
    }
}
