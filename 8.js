const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});
let numbers = [];
rl.question("Enter the first number: ", function (input1) {
    numbers.push(parseFloat(input1));
    rl.question("Enter the second number: ", function (input2) {
        numbers.push(parseFloat(input2));
        const larger = numbers[0] > numbers[1] ? numbers[0] : numbers[1];
        console.log("The larger number is: " + larger);
        rl.close();
    });
});
