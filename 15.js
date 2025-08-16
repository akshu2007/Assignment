const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});
readline.question("Enter a character: ", input => {
    const x = input.charAt(0);
    if (/[a-zA-Z]/.test(x)) {
        console.log("It is an alphabet");
    } else if (/[0-9]/.test(x)) {
        console.log("It is a digit");
    } else {
        console.log("It is a special character");
    }
    readline.close();
});
