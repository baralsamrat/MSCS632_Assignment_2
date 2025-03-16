// Stub version for environments without external crate support.
fn print_memory_usage(note: &str) {
    println!("[{}] (Memory usage info unavailable in this environment)", note);
}

fn main() {
    print_memory_usage("Start");
    
    // Allocate a vector with 1,000,000 integers
    let v: Vec<i32> = (0..1_000_000).collect();
    print_memory_usage("After allocation");
    
    // Drop the vector and observe memory usage
    drop(v);
    print_memory_usage("After deletion");
}

/*
use sysinfo::{System, SystemExt};

fn print_memory_usage(note: &str) {
    let mut sys = System::new_all();
    sys.refresh_all();
    let used_memory = sys.used_memory() as f64 / 1024.0 / 1024.0; // Convert kilobytes to MB
    println!("[{}] Memory usage: {:.2} MB", note, used_memory);
}

fn main() {
    print_memory_usage("Start");
    
    // Allocate a vector with 1,000,000 integers
    let v: Vec<i32> = (0..1_000_000).collect();
    print_memory_usage("After allocation");
    
    // Drop the vector and observe memory usage
    drop(v);
    print_memory_usage("After deletion");
}
*/
