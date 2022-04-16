// Selection sort
const numbers = [99, 44, 2, 10, 2, 5, 16, 3, 96, 125, 145];

function selectionSort(numbers) {
    const len = numbers.length;
    for(let i = 0; i < len; i++) {
        let min = i;
        let temp = numbers[i];
        for(let j = i+1; j < len; j++) {
            if(numbers[j] < numbers[min]) {
                min = j;
            }
        }
        numbers[i] = numbers[min];
        numbers[min] = temp;
    }
    return numbers;
}

console.log(selectionSort(numbers));
/*
[ 2,  2,  3,  5,  10, 16, 44, 96, 99, 125, 145 ]
*/