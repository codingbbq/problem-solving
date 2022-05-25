// https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/
// 2068. Check Whether Two Strings are Almost Equivalent

import java.util.HashMap;
import java.util.Map;

public class CheckAlmostEquivalent {
    public static void main(String[] args) {
        String word1 = "abcdeef";
        String word2 = "abaaacc";
        CheckAlmostEquivalent ce = new CheckAlmostEquivalent();
        boolean ans = ce.checkAlmostEquivalent(word1, word2);
        System.out.println(ans);
    }
    public boolean checkAlmostEquivalent(String word1, String word2) {
        int[] freq = new int[26];
        // Frequency of word1
        for(char x : word1.toCharArray()) {
            freq[x - 'a']++;
        }

        // Frequency of word2 but subtract from freq count array
        for(char x : word2.toCharArray()) {
            freq[x - 'a']--;
        }

        for(int i = 0; i < 26; i++) {
            if(Math.abs(freq[i]) > 3) {
                return false;
            }
        }

        return true;
    }
}
