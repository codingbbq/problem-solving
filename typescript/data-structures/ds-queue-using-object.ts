// Implement Queue data structure using javascript objects
class QueueUsingObject {
    items: { [key: string] : number };
    tail: number;
    head: number;
    constructor() {
        this.items = {};
        this.tail = 0; // tail of the queue to remove elements
        this.head = 0; // head of the queue to insert elements
    }

    // To add elements to the head of the queue
    enqueue(element: number): void {
        this.items[this.head] = element;
        this.head++;
    }

    // To remove elements from the tail of the queue
    dequeue(): number {
        const item = this.items[this.tail];
        delete this.items[this.tail];
        this.tail++;
        return item;
    }

    // Return the size of the queue
    size(): number {
        return this.head - this.tail;
    }

    // Return the top element in the queue
    peek(): number {
        return this.items[this.tail];
    }

    // Check if the queue is empty
    isEmpty(): boolean {
        return this.size() === 0;
    }

    print(): void {
        console.log(this.items);
    }
}

const q = new QueueUsingObject();
console.log("Is Empty", q.isEmpty());
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
console.log("Is Empty", q.isEmpty());
console.log("Size", q.size());
console.log(q.print());
console.log("Peek", q.peek());
q.dequeue();
q.dequeue();
console.log("Peek", q.peek());
console.log("Size", q.size());
console.log(q.print());


