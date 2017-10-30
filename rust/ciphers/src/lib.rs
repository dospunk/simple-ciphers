pub mod rot;

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn unit_test_rot() {
        assert_eq!(String::from("uryyb"), rot::encode("hello", 13));
        assert_eq!(String::from("hello"), rot::decode("uryyb", 13));
        assert_eq!(String::from("I like food"), rot::decode("M pmoi jssh", 4));
    }
}
