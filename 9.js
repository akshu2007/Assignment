const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.question("Enter a character: ", function(input) {
  const x = input.charAt(0);
  if (x === 'a' || x === 'e' || x === 'i' || x === 'o' || x === 'u' ||x === 'A' || x === 'E' || x === 'I' || x === 'O' || x === 'U') 
    {
    console.log("Vowel");
  } else {
    console.log("Consonant");
  }
  rl.close();
});