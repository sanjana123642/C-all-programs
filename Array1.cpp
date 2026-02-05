let arr1 = [5, 4, 1, 3];
let arr2 = [6, 2, 8, 9];

let sumArray = [];

for (let i = 0; i < arr1.length; i++) {
    sumArray[i] = arr1[i] + arr2[i];
}

console.log("Sum of individual index values:", sumArray);
