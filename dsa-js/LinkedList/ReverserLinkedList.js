class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class LinkedList {
    constructor(value) {
        this.head = {
            value : value,
            next : null
        };
        this.tail = this.head;
        this.length = 1;
    }

    // Append to a linked list
    append(value) {
        const newNode = new Node(value);
        this.tail.next = newNode;
        this.tail = newNode;
        this.length++;
        return this;
    }
    // Prepend to a linked list
    prepend(value) {
        const newNode = new Node(value);
        newNode.next = this.head;
        this.head = newNode;
        return this;
    }
    // insert into a lined list
    insert(index, value) {
        // When index is zero
        if(index === 0) {
            return this.prepend(value);
        }
        // Inserting at unknown index
        if(index >= this.length) {
            return this.append(value);
        }

        const newNode = new Node(value);
        const leader = this.traverseToIndex(index - 1);
        const holdingPointer = leader.next;
        leader.next = newNode;
        newNode.next = holdingPointer;
        this.length++;
        return this;
    }   
    // Remove from linked list
    remove(index) {
        // If the index does not exist, do nothing
        if(index >= this.length) {
            return this;
        }

        // if it is 0th index
        if(index === 0) {
            this.head = this.head.next;
            this.length--;
            return this;
        }

        let current = this.traverseToIndex(index - 1);
        let deleteNode = current.next;
        current.next = deleteNode.next;
        this.length--;
        return this;
    }
    // reverse a linked list
    reverse() {
        if(!this.head.next) {
            return this;
        }
        let first = this.head;
        this.tail = this.head;
        let second = first.next;
        while(second) {
            const temp = second.next;
            second.next = first;
            first = second;
            second = temp;
        }
        this.head.next = null;
        this.head = first;
        return this;
    }
    // traverse a linked list
    traverseToIndex(index) {
        let counter = 0;
        let currentNode = this.head;
        while(counter != index) {
            currentNode = currentNode.next;
            counter++;
        }
        return currentNode;
    }
    // Print the Linked list in an array
    printList() {
        const arr = [];
        let currentNode = this.head;
        while(currentNode !== null) {
            arr.push(currentNode.value);
            currentNode = currentNode.next;
        }
        console.log(arr);
    }
}

let myLinkedList = new LinkedList(1);
myLinkedList.append(2);
myLinkedList.append(10);
myLinkedList.prepend(100);
myLinkedList.printList(); // [ 100, 1, 2, 10 ]
myLinkedList.remove(0);
myLinkedList.printList(); // [ 1, 2, 10 ]
myLinkedList.reverse();
myLinkedList.printList(); // [ 10, 2, 1 ]