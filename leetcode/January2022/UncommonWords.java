// https://leetcode.com/problems/uncommon-words-from-two-sentences/
// 884. Uncommon Words from Two Sentences

import java.util.*;

public class UncommonWords {
    public static void main(String[] args) {
        UncommonWords uw = new UncommonWords();
        String s1 = "this apple is sweet";
        String s2 = "this apple is sour";
        String[] ans = uw.uncommonFromSentences(s1, s2);
        System.out.println(Arrays.toString(ans));
    }
    public String[] uncommonFromSentences(String s1, String s2) {
        Map<String, Integer> map = new HashMap<String, Integer>();
        for(String x : s1.split(" ")) {
            map.put(x, map.getOrDefault(x, 0)+1);
        }
        for(String x : s2.split(" ")) {
            map.put(x, map.getOrDefault(x, 0)+1);
        }

        // Loop through the map and add unique items to a list
        List<String> ans = new ArrayList<String>();
        for(Map.Entry<String, Integer> x : map.entrySet()) {
            if(x.getValue() == 1) {
                ans.add(x.getKey());
            }
        }

        // Convert list to an array
        String[] a = new String[ans.size()];
        return ans.toArray(a);
    }
}
