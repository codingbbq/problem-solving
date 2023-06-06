// https://leetcode.com/problems/buy-two-chocolates/
{
function buyChoco(prices: number[], money: number): number {
    prices.sort((a, b) => a - b);
    const purchased = prices[0] + prices[1];
    if(purchased > money) {
        return money;
    }
    return money - purchased;
};

const prices = [1,2,2], money = 3;
console.log(buyChoco(prices, money));

}

