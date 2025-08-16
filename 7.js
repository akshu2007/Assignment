const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.question("Enter the age: ", function(input) {
  const age = parseInt(input);
  if (age >= 18) {
    console.log("eligible");
  } else {
    console.log("not eligible");
  }
  rl.close();
});