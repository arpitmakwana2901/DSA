
// 1️⃣ Find the maximum number in an array.

// let array = [1, 3, 9, 2, 7, 5];
// let max = array[0];
// let secondLargest = array[0];

// for (let i = 0; i < array.length; i++) {
//   if (array[i] > max) {
//     secondLargest = max;
//     max = array[i];
//   }
// }
// console.log(secondLargest, "second");

// console.log("Max Number is", max);

// let number = [1, 2, 3, 4, 5, 6];
// let evenCount = 0;
// let oddCount = 0;

// for (let i = 0; i < number.length; i++) {
//   if (number[i] % 2 == 0) {
//     console.log("Number is Even", number[i]);
//     evenCount++;
//   } else {
//     console.log("Number is ODd", number[i]);
//     oddCount++;
//   }
// }

// console.log(evenCount, "even count");
// console.log(oddCount, "Odd count");

// 3️⃣ Reverse an array without using an extra array.

// let array = [1, 2, 3, 4, 5];
// let start = 0;
// let end = array.length - 1;

// while (start < end) {
//   let temp = array[start];
//   array[start] = array[end];
//   array[end] = temp;
//   start++;
//   end--;
// }

// console.log(array, "Sorted Array");

//4️⃣ Count the number of vowels in a string.

// let str = "Hello Arpit";
// let countVowel = 0;
// str = str.toLowerCase();

// for (let i = 1; i < str.length; i++) {
//   if (
//     str[i] == "a" ||
//     str[i] == "e" ||
//     str[i] == "i" ||
//     str[i] == "o" ||
//     str[i] == "u"
//   ) {
//     console.log(str[i], "Vowel");
//     countVowel++;
//   }
// }
// console.log(countVowel, "Count Vowel");

//5️⃣ Check whether a given string is palindrome or not.

let str = "madam";
let emptyStr = "";

for (let i = str.length - 1; i >= 0; i--) {
  emptyStr += str[i];
}

if (emptyStr == str) {
  console.log("String is palindrome");
} else {
  console.log("String is not pallindrome");
}
