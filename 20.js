const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
rl.question("Enter your choice (1: Tea, 2: Coffee, 3: Juice): ", function(input) {
    const x = parseInt(input);
    switch (x) {
        case 1:
            console.log("Tea");
            break;
        case 2:
            console.log("Coffee");
            break;
        case 3:
            console.log("Juice");
            break;
    }
    rl.close();
});
