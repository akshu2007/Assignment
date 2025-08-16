const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
rl.question("Enter the marks: ", function(input) {
    const marks = parseFloat(input);
    if (marks >= 40) {
        console.log("Passed");
    } else {
        console.log("Failed");
    }
    rl.close();
});
