// https://leetcode.com/problems/generate-fibonacci-sequence/
// 2648. Generate Fibonacci Sequence

function* fibGenerator(): Generator<number, any, number> {
    let n1 = 0, n2 = 1;
    while(true) {
        yield n1;
        [n1, n2] = [n2, n1+n2];
    }
};

const gen = fibGenerator();
console.log(gen.next().value); // 0
console.log(gen.next().value); // 1


