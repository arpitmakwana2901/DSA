// Count how many even and odd numbers are in an array.

let number = [1, 2, 3, 4, 5, 6, 7, 8, 9];
let evenCount = 0;
let oddCount = 0;

for (let i = 0; i < number.length; i++) {
  if (number[i] % 2 == 0) {
    // console.log(number[i], "Even Number");
    evenCount++;
  } else {
    // console.log(number[i], "odd Number");
    oddCount++;
  }
}
console.log(evenCount, "Even Count");
console.log(oddCount, "Odd Count");
// console.log(number, "Number");
