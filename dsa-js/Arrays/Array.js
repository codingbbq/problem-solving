/*
    Implement Arrays in JavaScript
*/

class myArray {
    constructor() {
        this.length = 0;
        this.data = {};
    }

     // Get item
     get(index) {
        return this.data[index];
     }

     // Push item
     push(item) {
        this.data[this.length] = item;
        this.length++;
     }
     // Pop item
     pop() {
         let lastItem = this.data[this.length - 1];
         delete this.data[this.length - 1];
         this.length--;
         return lastItem;
     }

     // Delete
     delete(index) {
         let deleteItem = this.get(index);
         this.shiftItem(index);
         return deleteItem;
     }

     shiftItem(index) {
         for(let i = index; i < this.length - 1; i++) {
             this.data[i] = this.data[i + 1];
         }
         delete this.data[this.length - 1];
         this.length--;
         return this.data;
     }
}

const newArray = new myArray();
// Add items
newArray.push('Hello');
newArray.push('World');
newArray.push('Learning');
console.log(newArray);
/*
myArray {
  length: 3,
  data: { '0': 'Hello', '1': 'World', '2': 'Learning' }
}
*/

// Get items
console.log(newArray.get(0));
// Hello

// Pop items
newArray.pop();
console.log(newArray);
// myArray { length: 2, data: { '0': 'Hello', '1': 'World' } }

// Delete item
newArray.delete(1);
console.log(newArray);
// myArray { length: 1, data: { '0': 'Hello' } }