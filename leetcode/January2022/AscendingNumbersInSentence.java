// https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/
// 2042. Check if Numbers Are Ascending in a Sentence

import java.util.ArrayList;
import java.util.List;

public class AscendingNumbersInSentence {
    public static void main(String[] args) {
        String s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles";
        AscendingNumbersInSentence an = new AscendingNumbersInSentence();
        boolean ans = an.areNumbersAscending(s);
        System.out.println(ans);
    }
    public static Integer getNumeric(String x) {
        int intValue;
        try {
            intValue = Integer.parseInt(x);
            return intValue;
        } catch (Exception e) {
            return -1;
        }
    }
    public boolean areNumbersAscending(String s) {
        String[] sent = new String[s.length()];
        sent = s.split(" ");
        int checkVal = Integer.MIN_VALUE;

        for(String x : sent) {
            int val = getNumeric(x);
            if(val != -1 && val > checkVal) {
                checkVal = val;
            } else if(val != -1 && val <= checkVal) {
                return false;
            }
        }
        return true;
    }
}
