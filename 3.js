const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
const password = "admin123";
rl.question("Enter password: ", function(input) {
  if (password.includes(input)) {
    console.log("Welcome");
  } else {
    console.log("Invalid password");
  }
  rl.close();
});
