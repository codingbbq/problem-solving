// Bubble sort
const numbers = [99, 44, 2, 10, 2, 5, 16, 3, 96, 125, 145];

function BubbleSort(arr) {
    for(let i = 0; i < arr.length; i++) {
        for(let j = 0; j < arr.length; j++) {
            if(arr[j] > arr[j+1]) {
                // swap
                let temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

console.log(BubbleSort(numbers));