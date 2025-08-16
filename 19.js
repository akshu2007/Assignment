const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
rl.question("Enter type of fuel (1: Petrol, 2: Diesel, 3: Electric): ", function(input) {
    const x = parseInt(input);
    switch (x) {
        case 1:
            console.log("Petrol");
            break;
        case 2:
            console.log("Diesel");
            break;
        case 3:
            console.log("Electric");
            break;
    }
    rl.close();
});
