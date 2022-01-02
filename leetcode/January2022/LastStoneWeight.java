// https://leetcode.com/problems/last-stone-weight/
// 1046. Last Stone Weight

import java.util.PriorityQueue;

public class LastStoneWeight {
    public static void main(String[] args) {
        int[] stones = {7,6,7,6,9};
        LastStoneWeight lw = new LastStoneWeight();
        int ans = lw.lastStoneWeight(stones);
        System.out.println(ans);

    }
    public int lastStoneWeight(int[] stones) {
        int res = 0;
        PriorityQueue<Integer> q = new PriorityQueue<>((a1, a2) -> (a2 - a1)); //here i am creating a max heap

        for (Integer i : stones) {
            q.add(i);
        }

        while(q.size() > 1) {
            //take out the top 2 num first
            int one = q.poll();
            int two = q.poll();
            if (one != two) {
                q.add(Math.abs(one - two));
            }
        }

        if (q.size() == 1) {
            res =  q.poll();
        } else if (q.size() ==0) {
            res = 0;
        }

        return res;

    }
}
