// https://leetcode.com/problems/keyboard-row/

import java.util.Arrays;

public class KeyboardRow {

    public static void main(String[] args) {
        String[] words = {"Hello","Alaska","Dad","Peace"};

        KeyboardRow kr = new KeyboardRow();
        String[] output = kr.findWords(words);
        System.out.println(Arrays.toString(output));
    }

    public String[] findWords(String[] words) {

        String[] output = new String[words.length];

        int idx = 0;
        for(int i = 0; i < words.length; i++) {
            if(checkWord(words[i])) {
                output[idx] = words[i];
                idx++;
            }
        }

        String[] finaloutput = Arrays.copyOf(output, idx);
        return finaloutput;
    }

    public boolean checkWord(String w) {
        String[] row = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        String[] arrayWord = w.split("");
        for(int i = 0; i < row.length; i++) {

            boolean found = true;
            for(int j = 0; j < arrayWord.length; j++) {
                if(!row[i].contains(arrayWord[j].toLowerCase())) {
                    found = false;
                    break;
                }
            }

            if(found) {
                return true;
            }
        }

        return false;
    }

}
