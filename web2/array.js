let arr1=[];
let arr2=[1,2,3];
let arr3=new Array(3);
console.log(arr2);

let fruits = ["Apple", "Banana", "Mango"];
let firstFruit = fruits[0]; // "Apple"
let secondFruit = fruits[1]; // "Banana"
console.log(fruits);
console.log(firstFruit);
console.log(secondFruit);
let length = fruits.length; // 3
console.log(length);
// Add elements to the end
fruits.push("Orange"); // ["Apple", "Banana", "Mango", "Orange"]
console.log(fruits);
// Remove the last element
let last = fruits.pop(); // "Orange"
console.log(fruits);

// Add elements to the beginning
fruits.unshift("Strawberry"); // ["Strawberry", "Apple", "Banana", "Mango"]
console.log(fruits);

// Remove the first element
let first = fruits.shift(); // "Strawberry"
console.log(fruits);

//finding elements
let index = fruits.indexOf("Banana"); // 1
console.log(index);
let notFound = fruits.indexOf("Grapes"); // -1
console.log(notFound);

let includesBanana = fruits.includes("Banana"); // true
console.log(includesBanana);
let includesGrapes = fruits.includes("Grapes"); // false
console.log(includesGrapes);


// Reverse an array
let reversed = fruits.reverse(); // ["Mango", "Banana", "Apple"]
console.log(reversed);

// Sort an array
let sorted = fruits.sort(); // ["Apple", "Banana", "Mango"]
console.log(sorted);

// Join elements into a string
let str = fruits.join(", "); // "Apple, Banana, Mango"
console.log(str);

let copy=fruits.slice();//shallow copy- ahange in original changes the values in copy array. share memory location
console.log(copy);
let copyWithSpread=[...fruits];//deep copy- different memory location
console.log(copyWithSpread);
