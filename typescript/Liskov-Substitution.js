class Shape {
    setColor() {
      //
    }
    render() {
      
    }
  }
  
  class Rectangle extends Shape {
    constructor(width, height) {
      super();
      this.width = width;
      this.height = height;
    }
    getArea() {
      return this.width * this.height;
    }
  }
  
  class Square extends Shape {
    constructor(length) {
      super();
      this.length = length;
    }
    getArea() {
      return this.length * this.length;
    }
  }
  
  function renderLargeShapes(shapes){
    const total = shapes.reduce((acc, curr) => {
       return acc + curr.getArea();
    }, 0);
    return total;
  }
   
  const shapes = [new Rectangle(4,5), new Square(10), new Rectangle(1,2)];
  console.log(renderLargeShapes(shapes));