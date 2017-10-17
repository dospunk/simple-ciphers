pub mod rot;

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn unit_test_rot() {
        assert_eq!(String::from("uryyb"), rot::encode("hello", 13));
    }
}
