// https://leetcode.com/problems/calculator-with-method-chaining/
// 2726. Calculator with Method Chaining

class Calculator {
  value: number;
  constructor(value: number) {
    this.value = value;
  }

  add(value: number): Calculator {
    this.value = this.value + value;
    return new Calculator(this.value);
  }

  subtract(value: number): Calculator {
    this.value = this.value - value;
    return new Calculator(this.value);
  }

  multiply(value: number): Calculator {
    this.value = this.value * value;
    return new Calculator(this.value);
  }

  divide(value: number): Calculator {
    if(value === 0) {
        throw new Error('Division by zero is not allowed');
    }
    this.value = this.value / value;
    return new Calculator(this.value);
  }

  power(value: number): Calculator {
    this.value = Math.pow(this.value, value);
    return new Calculator(this.value);
  }

  getResult(): number {
    return this.value;
  }
}

const calc = new Calculator(2).multiply(5).power(2).getResult();
console.log(calc);
