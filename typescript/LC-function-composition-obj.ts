// https://leetcode.com/problems/function-composition/editorial/

type NumberFunction = (x: number) => number;

interface MyObject {
    value: number;
    increment: NumberFunction;
    double: NumberFunction;
}

const obj: MyObject = {
    value: 1,
    increment: function() {
        ++this.value;
        return this.value;
    },
    double: function() {
        this.value *= 2;
        return this.value;
    }
}

const compose = (functions: NumberFunction[], context: MyObject): NumberFunction => {
    return function(x: number) {
        let result = x;
        for(let i = functions.length - 1; i >= 0; i--) {
            result = functions[i].call(context,x);
        }
        return result;
    }
}

const mycompose = compose([obj.increment, obj.increment, obj.double], obj);
console.log(mycompose(1));

