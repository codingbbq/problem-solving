// https://leetcode.com/problems/function-composition/
{

type F = (x: number) => number;

function compose(functions: F[]): F {
	return function(x) {
        for(let i = functions.length - 1; i >= 0; i--) {
            x = functions[i](x);
        } 
        return x;
    }
};

/*
    const fn1 = x => x + 1;
    const fn2 = x => 2 * x;
    console.log(fn1(fn2(4)));
*/


const fn = compose([x => x + 1, x => 2 * x])
console.log(fn(4)); // 9

}