// JavaScript: Demonstrating lexical scoping and closures
function outer() {
    let x = 10;
    function inner() {
        // JavaScript functions create closures capturing variables from the outer scope.
        x += 1;
        return x;
    }
    return inner;
}

const closureFunction = outer();
console.log("JavaScript closure call 1:", closureFunction());  // 11
console.log("JavaScript closure call 2:", closureFunction());  // 12


// Ouput
// JavaScript closure call 1: 11
// JavaScript closure call 2: 12
