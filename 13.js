const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});
let numbers = [];
rl.question("Enter first number: ", function (a) {
    numbers.push(parseFloat(a));
    rl.question("Enter second number: ", function (b) {
        numbers.push(parseFloat(b));
        rl.question("Enter third number: ", function (c) {
            numbers.push(parseFloat(c));
            const x = Math.min(...numbers);
            console.log("Smallest number is: " + x);
            rl.close();
        });
    });
});
