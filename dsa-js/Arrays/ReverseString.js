/*
Create a function that reverses a string;
*/
function reverse(str) {
    // Check input
    if(!str || str.length < 2 || typeof str != 'string') {
        return 'Illegal input';
    }
    const backwards = [];
    const totalItems = str.length - 1;
    for(let i = totalItems; i >= 0; i--) {
        backwards.push(str[i]);
    }
    return backwards.join('');
}

const ans = reverse("Hi my name is John!");
console.log(ans); 
// !nhoJ si eman ym iH

const reverse2 = str => [...str].reverse().join('');
console.log(reverse2('Hi my name is Jane!'));
// !enaJ si eman ym iH