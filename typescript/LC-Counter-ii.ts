// https://leetcode.com/problems/counter-ii/description/

type ReturnObj = {
    increment: () => number,
    decrement: () => number,
    reset: () => number
}

class createCounter implements ReturnObj {
    countInit: number;
    init: number;
    constructor(init: number) {
        this.countInit = init;
        this.init = init;
    }

    increment() {
        return ++this.countInit;
    }

    decrement() {
        return --this.countInit;
    }

    reset() {
        return this.countInit = this.init;
    }
}

const counter = new createCounter(5);
console.log(counter.increment());
console.log(counter.reset());
console.log(counter.decrement());

/*
function createCounter(init: number): ReturnObj {
    let countInit = init;
    const increment = () => ++countInit;
    const decrement = () => --countInit;
    const reset = () => countInit = init;

    return {
        increment,
        decrement,
        reset
    }
}

const counter = createCounter(5);
console.log(counter.increment());
console.log(counter.reset());
console.log(counter.decrement());
*/