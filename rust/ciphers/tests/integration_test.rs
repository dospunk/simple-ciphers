extern crate ciphers;

#[test]
fn int_test_rot(){
    assert_eq!(String::from("uryyb"), ciphers::rot::encode("hello", 13));
}
