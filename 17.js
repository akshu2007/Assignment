const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
let inputs = [];
rl.question("Enter first number: ", (num1) => {
    inputs.push(parseFloat(num1));
    rl.question("Enter second number: ", (num2) => {
        inputs.push(parseFloat(num2));
        rl.question("Enter operation (+, -, *, /): ", (op) => {
            const [x, y] = inputs;
            let result;
            switch (op) {
                case '+':
                    result = x + y;
                    break;
                case '-':
                    result = x - y;
                    break;
                case '*':
                    result = x * y;
                    break;
                case '/':
                    result = y !== 0 ? x / y : "Can't be divided by zero";
                    break;
            }
            console.log("Result:", result);
            rl.close();
        });
    });
});
