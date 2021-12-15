// https://leetcode.com/problems/truncate-sentence/
// 1816. Truncate Sentence

public class TruncateSentence {
    public static void main(String[] args) {
        String s = "Hello how are you Contestant";
        int k = 4;
        TruncateSentence ts = new TruncateSentence();
        String answer = ts.truncateSentence(s, k);
        System.out.println(answer);
    }
    public String truncateSentence(String s, int k) {
        String[] x = s.split(" ");
        String a = "";
        for(int i=0; i < k; i++) {
            a += x[i];
            if(i != k-1) {
                a += " ";
            }
        }
        return a;
    }
}
