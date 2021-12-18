// https://leetcode.com/problems/sorting-the-sentence/
// 1859. Sorting the Sentence

public class SortingSentence {
    public static void main(String[] args) {
        String s = "is2 sentence4 This1 a3";
        SortingSentence ss = new SortingSentence();
        String ans = ss.sortSentence(s);
        System.out.println(ans);
    }

    public static int getDigit(String x) {
        char last = x.substring(x.length()-1).charAt(0);
        if(Character.isDigit(last)) {
            return Integer.parseInt(Character.toString(last))-1;
        }
        return -1;
    }

    public String sortSentence(String s) {
        String[] a = s.split(" ");
        String[] ans = new String[a.length];
        for(int i = 0; i < a.length; i++) {
            int index = getDigit(a[i]);
            ans[index] = a[i].substring(0, a[i].length()-1);
        }
        return String.join(" ", ans);
    }
}
