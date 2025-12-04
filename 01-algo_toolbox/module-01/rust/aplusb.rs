use std::io;

fn main() {
    let mut input_buf = String::new();
    io::stdin().read_line(&mut input_buf).expect("Failed to read line");

    let mut iter = input_buf.split_whitespace();
    let x: i32 = iter.next().unwrap().parse().unwrap();
    let y: i32 = iter.next().unwrap().parse().unwrap();

    println!("{}", (x + y));
}