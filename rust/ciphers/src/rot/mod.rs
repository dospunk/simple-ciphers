pub fn encode(s: &str, n: u8) -> String{
    let mut output = String::new();
    for c in s.chars(){
        let x = c as u8;
        let letter_before_n = x <= 90-n && x >= 65 || x <= 122-n && x >= 97;
        let letter_after_n = x >= 90-n && x <= 90 || x >= 122-n && x <= 122;
        if letter_before_n {
            output.push(char::from(x+n));
        } else if letter_after_n {
            output.push(char::from(x-26+n));
        } else {
            output.push(char::from(n));
        }
    }
    output //return
}
