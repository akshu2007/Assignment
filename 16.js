const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});
readline.question("Enter day number (1-7): ", input => {
    const x = parseInt(input);
    switch (x) {
        case 1:
            console.log("Monday");
            break;
        case 2:
            console.log("Tuesday");
            break;
        case 3:
            console.log("Wednesday");
            break;
        case 4:
            console.log("Thursday");
            break;
        case 5:
            console.log("Friday");
            break;
        case 6:
            console.log("Saturday");
            break;
        case 7:
            console.log("Sunday");
            break;
    }
    readline.close();
});
