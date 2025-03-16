// Rust: Using Box<T> for heap allocation
fn main() {
    // 'Box' allocates memory on the heap and transfers ownership to variable 'x'
    let x = Box::new(42);
    println!("The value of x is: {}", x);
    // Memory is automatically freed when 'x' goes out of scope.
}


// Output: 
// The value of x is: 42
