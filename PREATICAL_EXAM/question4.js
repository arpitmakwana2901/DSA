// Check whether a given string is palindrome or not.

let string = "madam";
let revString = "";

for (let i = string.length - 1; i >= 0; i--) {
  revString += string[i];
}

if (string == revString) {
  console.log("Palindrome");
} else {
  console.log("not palindrome");
}
