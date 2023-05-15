use std::io;
use std::io::Write;

fn flush() {
    io::stdout().flush().expect("Failed")
}

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    print!("a = ");
    flush();
    io::stdin().read_line(&mut a).expect("Failed to read line");

    print!("b = ");
    flush();
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a = a.trim();
    let b = b.trim();
    
    println!("Perform Swap:");

    println!("a = {b}, b = {a}");
}
