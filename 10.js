const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});
rl.question("Enter a year: ", function (input) {
    const year = parseInt(input)
    if ((year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0)) {
        console.log(`${year} \nis a leap year`);
    } else {
        console.log(`${year} \nis not a leap year`);
    }
    rl.close();
});
