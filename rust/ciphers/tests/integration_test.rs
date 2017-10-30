extern crate ciphers;

#[test]
fn int_test_rot(){
    assert_eq!(String::from("uryyb"), ciphers::rot::encode("hello", 13));
    assert_eq!(String::from("hello"), ciphers::rot::decode("uryyb", 13));
    assert_eq!(String::from("I like food"), ciphers::rot::decode("M pmoi jssh", 4));
}
