// Intentional errors: incorrect variable name "o" and a malformed function call
function calculateSum(arr) {
    let total = o;  // 'o' is not defined
    for (let num of arr) {
        total += num;
    }
    return total;
}

let numbers = [1, 2, 3, 4, 5];
// Intentional error: space in function name call, should be calculateSum, not calculate Sum
let result = calculate Sum(numbers);
console.log("Sum in JavaScript:", result);
