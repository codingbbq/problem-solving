function firstRecurring(arr) {
    let freq = new Map();
    for(let i = 0; i < arr.length; i++) {
        if(freq.has(arr[i])) {
            return arr[i];
        } else {
            freq.set(arr[i], true);
        }
    }
    return undefined;
}

const input = [2,5,1];
const ans = firstRecurring(input);
console.log(ans);