// https://leetcode.com/problems/occurrences-after-bigram/
// 1078. Occurrences After Bigram

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class StringOccurrences {
    public static void main(String[] args) {
        String text = "we will we will rock you";
        String first = "we";
        String second = "will";
        StringOccurrences so = new StringOccurrences();
        String[] ans = so.findOcurrences(text, first, second);
        System.out.println(Arrays.toString(ans));
    }
    public String[] findOcurrences(String text, String first, String second) {
        List<String> ans = new ArrayList<String>();
        String[] textArray = text.split(" ");
        for(int i = 0; i < textArray.length - 2; i++) {
            if(textArray[i].equals(first) && textArray[i+1].equals(second)) {
                ans.add(textArray[i+2]);
            }
        }
        String[] a = new String[ans.size()];
        return ans.toArray(a);
    }
}
