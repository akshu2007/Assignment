const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
rl.question("Enter (1-12): ", function (input) {
    const x = parseInt(input);
    switch (x) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            console.log("Number of days: 31");
            break;
        case 4: case 6: case 9: case 11:
            console.log("Number of days: 30");
            break;
        case 2:
            console.log("Number of days: 28 or 29");
            break;
    }
    rl.close();
});
