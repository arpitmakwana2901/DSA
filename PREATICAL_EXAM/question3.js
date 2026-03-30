// 4️⃣ Count the number of vowels in a string.

let str = "Hello Arpit";
let countVowel = 0;
str = str.toLowerCase();
for (let i = 1; i < str.length; i++) {
  if (
    str[i] === "a" ||
    str[i] === "e" ||
    str[i] === "i" ||
    str[i] === "o" ||
    str[i] === "u"
  ) {
    countVowel++;
  }
}
console.log(countVowel, "Count Vowel");















//Second Largest --

// let array = [2, 5, 7, 3, 1, 9];
// let max = array[0];
// let secondLargest = array[0];
// for (let i = 0; i < array.length; i++) {
//   if (array[i] > max) {
//     secondLargest = max;
//     max = array[i];
//   }
// }
// console.log(max, "Max number is...");
// console.log(secondLargest, "Second Largest ...");
