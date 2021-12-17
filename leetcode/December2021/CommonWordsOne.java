// https://leetcode.com/problems/count-common-words-with-one-occurrence/
// 2085. Count Common Words With One Occurrence

import java.util.HashMap;
import java.util.Map;

public class CommonWordsOne {
    public static void main(String[] args) {
        String[] words1 = {"leetcode","is","amazing","as","is"};
        String[] words2 = {"amazing","leetcode","is"};
        CommonWordsOne co = new CommonWordsOne();
        int answer = co.countWords(words1, words2);
        System.out.println(answer);
    }
    public int countWords(String[] words1, String[] words2) {
        Map<String, Integer> w1 = new HashMap<String, Integer>();
        Map<String, Integer> w2 = new HashMap<String, Integer>();
        for(String x : words1) {
            w1.put(x, w1.getOrDefault(x, 0)+1);
        }
        for(String y : words2) {
            w2.put(y, w2.getOrDefault(y, 0)+1);
        }
        int count = 0;
        for(String x : w1.keySet()) {
            if(w1.get(x) == 1 && (w2.containsKey(x) && w2.get(x) == 1 )) {
                count++;
            }
        }
        return count;
    }
}
