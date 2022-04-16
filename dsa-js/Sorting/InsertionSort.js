// Insertion sort
const numbers = [99, 44, 2, 10, 5, 16, 3, 96, 125, 145];

function insertionSort(numbers) {
    const length = numbers.length;
    for(let i = 0; i < length; i++) {
        if(numbers[i] < numbers[0]) {
            numbers.unshift(numbers.splice(i, 1)[0]);
        } else {

            for(let j = 1; j < i; j++) {
                if(numbers[i] > numbers[j-1] && numbers[i] < numbers[j]) {
                    numbers.splice(j, 0, numbers.splice(i, 1)[0]);
                }
            }

        }
    }

    return numbers;
}

console.log(insertionSort(numbers));
/*
[
   2,  3,  5,  10,  16,
  44, 96, 99, 125, 145
]
*/