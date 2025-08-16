const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.question("Enter a number: ", function(input) {
  const num = parseFloat(input);

  if (num > 0) {
    console.log("positive");
  } else {
    console.log("negative");
  }
  rl.close();
});