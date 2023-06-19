// https://leetcode.com/problems/number-of-senior-citizens/
// 2678. Number of Senior Citizens

{
    function countSeniors(details: string[]): number {
        // using reduce
        /*
        return details.reduce((prev:number, current: string) => {
            const age: number = Number(current.slice(-4,-2));
            prev += age > 60 ? 1: 0;
            return prev;
        }, 0)
        */

        // Using Filter - cleaner approach
        return details.filter((detail: string) => {
            return Number(detail.slice(-4,-2)) > 60
        }).length;
    };

    const details = ["7868190130M7522","5303914400F9211","9273338290F4010"];
    console.log(countSeniors(details));
}