// 0, 1, 1, 2, 3, 5, 8, 13, 21

function fibonacci() {
    let cache = {};
    return function fib(n) {
        if(n in cache) {
            return cache[n];
        } else {
            if(n < 2) {
                return n;
            } else {
                cache[n] = fib[n-1] + fib[n-2];
                return cache[n];
            }
        }
    }
}

const f = fibonacci();
console.log(f(10));