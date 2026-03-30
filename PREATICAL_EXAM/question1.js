// Find the maximum number in an array.

let array = [1, 3, 8, 2, 5, 4];
let max = array[0];

for (let i = 1; i < array.length; i++) {
  if (max < array[i]) {
    max = array[i];
  }
}
console.log(max, "Max Number...");
