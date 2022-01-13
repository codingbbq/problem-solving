// https://leetcode.com/problems/goat-latin/
// 824. Goat Latin

import java.util.HashMap;
import java.util.Map;

public class GoatLatin {
    public static void main(String[] args) {
        String sentence = "I speak Goat Latin";
        GoatLatin gl = new GoatLatin();
        String ans = gl.toGoatLatin(sentence);
        System.out.println(ans);
    }
    public String toGoatLatin(String sentence) {
        String[] g = sentence.trim().split(" ");
        Map<String, Boolean> map = new HashMap<String, Boolean>();
        map.put("a", true);
        map.put("e", true);
        map.put("i", true);
        map.put("o", true);
        map.put("u", true);

        for(int i = 0; i < g.length; i++) {
            String extra = new String(new char[i+1]).replace('\0', 'a');
            if(map.containsKey(Character.toString(g[i].charAt(0)).toLowerCase())) {
                g[i] = g[i] + "ma";
                g[i] = g[i] + extra;
            } else {
                g[i] = g[i].substring(1) + g[i].substring(0,1) + "ma" + extra;
            }
        }

        return String.join(" ", g);
    }
}
