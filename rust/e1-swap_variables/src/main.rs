use std::io;
use std::io::Write;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    print!("a = ");
    io::stdout().flush().expect("Failed");
    io::stdin().read_line(&mut a).expect("Failed to read line");

    print!("b = ");
    io::stdout().flush().expect("Failed");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a = a.trim();
    let b = b.trim();

    if a.is_empty() || b.is_empty() {
        panic!("Please input something.");
    }
    
    println!("Perform Swap:");

    println!("a = {b}, b = {a}");
}
