const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.question("Enter marks: ", function(input) {
  const marks = parseFloat(input);
  if (marks >= 90) {
    console.log("A");
  } else if (marks >= 75) {
    console.log("B");
  } else if (marks >= 50) {
    console.log("C");
  } else {
    console.log("Fail");
  }
  rl.close();
});