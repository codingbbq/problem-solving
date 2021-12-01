// https://leetcode.com/problems/relative-ranks/

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class RelativeRanks {

    public static void main(String[] args) {
        int[] scores = {10,3,8,9,4};

        RelativeRanks rr = new RelativeRanks();
        String[] output = rr.findRelativeRanks(scores);
        System.out.println(Arrays.toString(output));

    }

    public String[] findRelativeRanks(int[] score) {

        String[] medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        String[] output = new String[score.length];

        int[] sortedScore = Arrays.copyOf(score, score.length);
        Arrays.sort(sortedScore);

        // Create a Map with score and rank from sortedScore array
        Map<Integer, Integer> ranks = new HashMap<Integer, Integer>();
        int j = 1;
        for(int i = sortedScore.length; i > 0; i--) {
            ranks.put(sortedScore[i-1], j++);
        }

        // Loop through the score array and generate output

        for(int i = 0; i < score.length; i++) {
            if(ranks.containsKey(score[i])) {

                int r = ranks.get(score[i]);
                switch (r) {
                    case 1:
                        output[0] = medals[0];
                        break;

                    case 2:
                        output[1] = medals[1];
                        break;

                    case 3:
                        output[2] = medals[2];
                        break;

                    default:
                        output[r-1] = ""+ranks.get(score[i]);
                        break;
                }

            }

        }

        return output;

    }
}
