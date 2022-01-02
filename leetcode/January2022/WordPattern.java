// https://leetcode.com/problems/word-pattern/
// 290. Word Pattern

import java.util.HashMap;
import java.util.Map;

public class WordPattern {
    public static void main(String[] args) {
        String pattern = "abba";
        String s = "dog dog dog dog";
        WordPattern wp = new WordPattern();
        boolean ans = wp.wordPattern(pattern, s);
        System.out.println(ans);
    }
    public boolean wordPattern(String pattern, String s) {
        Map<Character, String> map = new HashMap<Character, String>();

        char[] p = pattern.toCharArray();
        String[] st = s.split(" ");

        // Check if both pattern length and string length are same
        if(p.length != st.length) return false;

        for(int i = 0; i < p.length; i++) {
            if(map.containsKey(p[i])) {
                // Check if the key and values are matching
                if(!map.get(p[i]).equals(st[i])) {
                    return false;
                }
            } else {
                // Check if the value is not already present
                if(map.containsValue(st[i])) {
                    return false;
                }
                map.put(p[i], st[i]);
            }
        }
        return true;

    }
}
