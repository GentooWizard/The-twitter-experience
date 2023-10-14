use std::io;

fn main() {
    println!("A twitter user is aproching you / Do you talk to him (Y/N): ");

    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    if input.trim() == "Y" || input.trim() == "y" {
        println!("The twitter user asks you if you support the LGBTQIA+ community / Do you? (Y/N): ");
        let mut input = String::new();
        io::stdin()
            .read_line(&mut input)
            .expect("Failed to read line");

        if input.trim() == "Y" || input.trim() == "y" {
            println!("YOU WON TWITTER YAY");
        } else if input.trim() == "N" || input.trim() == "n" {
            println!("You got cancelled lol");
        } else {
            println!("Invalid input");
            return;
        }
    } else if input == "N" || input == "n" {
        return;
    } else {
        println!("Invalid input");
        return;
    }
}
