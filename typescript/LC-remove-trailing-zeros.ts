// https://leetcode.com/problems/remove-trailing-zeros-from-a-string/
// 2710. Remove Trailing Zeros From a String
{
    function removeTrailingZeros(num: string): string {
        let i = num.length - 1;
        while(i >= 0 && num[i] === "0"){
            i--;
        }
        return num.slice(0, i + 1);
    };

    const num = "51230100";
    console.log(removeTrailingZeros(num));
}
