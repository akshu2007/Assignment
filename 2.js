const readline = require("readline");
const { json } = require("stream/consumers");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question("Enter a letter: ", function(x) {
  if (x.length === 1 && x === x.toUpperCase() && x !== x.toLowerCase()) {
    console.log("uppercase.");
  } else {
    console.log("not uppercase.");
  }
  rl.close();
});