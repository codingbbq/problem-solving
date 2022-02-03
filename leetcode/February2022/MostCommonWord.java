// https://leetcode.com/problems/most-common-word/
// 819. Most Common Word

import java.util.*;

public class MostCommonWord {
    public static void main(String[] args) {
        String paragraph = "a, a, a, a, b,b,b,c, c";
        String[] banned = {"a"};
        MostCommonWord mw = new MostCommonWord();
        String ans = mw.mostCommonWord(paragraph, banned);
        System.out.println(ans);
    }
    public String mostCommonWord(String paragraph, String[] banned) {
        Map<String, Integer> wordCount = new HashMap<String, Integer>();

        // 1). replace the punctuations with spaces,
        // and put all letters in lower case
        String normalizedStr = paragraph.replaceAll("[^a-zA-Z0-9 ]", " ").toLowerCase();

        // 2). split the string into words
        String[] words = normalizedStr.split("\\s+");

        // Putting banned words in a HashSet so that we can easily check
        Set<String> bannedWords = new HashSet<String>();
        for(String x : banned) {
            bannedWords.add(x);
        }

        for (String word : words) {
            if (!bannedWords.contains(word))
                wordCount.put(word, wordCount.getOrDefault(word, 0) + 1);
        }

        // Find the maximum frequency word
        int maximum = 0;
        String notBanned = "";
        for(Map.Entry<String, Integer> x : wordCount.entrySet()) {
            if(x.getValue() > maximum) {
                maximum = x.getValue();
                notBanned = x.getKey();
            }
        }

        return notBanned;
    }
}
