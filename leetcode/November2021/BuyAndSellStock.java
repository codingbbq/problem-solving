//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

public class BuyAndSellStock {

    public static void main(String[] args) {
        int[] prices = {7,1,5,3,6,4};

        BuyAndSellStock bss = new BuyAndSellStock();
        int profit = bss.maxProfit(prices);
        System.out.println(profit);
    }

    public int maxProfit(int[] prices) {
        int profit = 0;
        int minPrice = Integer.MAX_VALUE;

        for(int i = 0; i < prices.length; i++) {
            if(prices[i] < minPrice) {
                minPrice = prices[i];
            } else if(prices[i] - minPrice > profit) {
                profit = prices[i] - minPrice;
            }
        }

        return profit;
    }
}
