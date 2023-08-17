// Implement a Queue data structure using Arrays
// FIFO - Queue is a sequential collection of elements that follows the principle of First In First Out
// enqueue - to insert into the queue at the tail
// dequeue - to remove from the queue from the head
// peek - to check the top most element in the queue
// isEmpty - to check if queue is empty
// size - to get the size of queue
// print - to print all the elements of the queue
class QueueUsingArray {
    items: number[];
    constructor() {
        this.items = [];
    }

    size(): number {
        return this.items.length;
    }

    enqueue(element: number): void {
        this.items.push(element);
    }

    dequeue(): number {
        return this.items.shift() ?? -1;
    }

    peek(): number | null {
        return this.isEmpty() ? null : this.items[0];
    }

    isEmpty(): boolean {
        return this.items.length === 0;
    }

    print(): void {
        console.log(this.items);
    }
}

const queue = new QueueUsingArray();
console.log('Queue size', queue.size());
queue.enqueue(10);
queue.enqueue(20);
queue.enqueue(30);
queue.enqueue(40);
queue.enqueue(50);
queue.print();
console.log('Peek', queue.peek());
console.log('Dequeue', queue.dequeue());
console.log('Dequeue', queue.dequeue());
queue.print();

