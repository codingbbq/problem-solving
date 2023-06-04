// Write a function for array flatting.

type NestedArray<T> = Array<T | NestedArray<T>>;

const myFlatArray = <T>(arr: NestedArray<T>, depth: number = 1): T[] => {
  let result: T[] = [];

  for (let i = 0; i < arr.length; i++) {
    if (Array.isArray(arr[i]) && depth > 0) {
      const subArray: T[] = myFlatArray(arr[i] as NestedArray<T>, depth - 1);
      result = result.concat(subArray);
    } else {
      result.push(arr[i] as T);
    }
  }

  return result;
};

// Example usage
const nestedArray: NestedArray<number> = [1, [2, [3, 4], 5], 6];
const flattenedArray: number[] = myFlatArray(nestedArray, 2);
console.log(flattenedArray); // Output: [1, 2, 3, 4, 5, 6]