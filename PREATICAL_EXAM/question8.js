//Aarmstrong Number

function Aarmstrong(num) {
  let temp = num;
  let count = 0;
  let sum = 0;
  // Step 1 : Count Digit ----

  while (temp > 0) {
    count++;
    temp = Math.floor(temp / 10);
  }

  temp = num;

  while (temp > 0) {
    let digit = temp % 10;
    sum += digit ** count;
    temp = Math.floor(temp / 10);
  }

  // Step 3: Check
  if (sum == num) {
    console.log("Armstrong Number",+num);
  } else {
    console.log("Not Armstrong");
  }
}

Aarmstrong(1634);
