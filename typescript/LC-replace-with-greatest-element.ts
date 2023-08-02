// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/
// 1299. Replace Elements with Greatest Element on Right Side
{

    function replaceElements(arr: number[]): number[] {
        let max = -1;
        for(let i = arr.length - 1; i >= 0; i-- ) {
            let newMax = Math.max(arr[i], max);
            arr[i] = max;
            max = newMax;
        }
        return arr;
    };

    /*
    function replaceElements(arr: number[]): number[] {
        let len = arr.length;
        for(let i = 0; i < len; i++) {
            arr[i] = greatestElement(arr, len, i+1);
        }
        return arr;
    };

    function greatestElement(arr: number[], len: number,  startIndex: number): number {
        let max = -1;
        for(let i = startIndex; i < len; i++) {
            max = Math.max(max, arr[i]);
        }
        return max;
    }
    */
    const arr = [17,18,5,4,6,1];
    console.log(replaceElements(arr));
}