const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});
readline.question("Enter a number: ", input => {
    const num = parseInt(input);
    if (num % 3 === 0 && num % 5 === 0) {
        console.log("divisible");
    } else {
        console.log("not divisible");
    }
    readline.close();
});
