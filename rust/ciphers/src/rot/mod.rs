#![allow(non_upper_case_globals)]

const A_val: u8 = 65;
const a_val: u8 = 97;
const Z_val: u8 = 90;
const z_val: u8 = 122;

pub fn encode(s: &str, n: u8) -> String{
    let mut output = String::new();
    for c in s.chars(){
        let x = c as u8;
        let letter_before_n = x <= Z_val-n && x >= A_val || x <= z_val-n && x >= a_val;
        let letter_after_n = x >= Z_val-n && x <= Z_val || x >= z_val-n && x <= z_val;
        if letter_before_n {
            output.push(char::from(x+n));
        } else if letter_after_n {
            output.push(char::from(x-26+n));
        } else {
            output.push(c);
        }
    }
    output //return
}

pub fn decode(s: &str, n: u8) -> String{
    let mut output = String::new();
    for c in s.chars(){
        let x = c as u8;
        let letter_after_n = x >= A_val+n && x <= Z_val || x >= a_val+n && x <= z_val;
        let letter_before_n = x < A_val+n && x >= A_val || x < a_val+n && x >= a_val;
        if letter_after_n {
            output.push(char::from(x-n));
        } else if letter_before_n {
            output.push(char::from(x+26-n));
        } else {
            output.push(c);
        }
    }
    output //return
}
