all:
	cd cpp && make
	cd rust/ciphers && cargo build

test:
	cd cpp && make run
	cd rust/ciphers && cargo test

clean:
	cd cpp && make clean
	cd rust/ciphers && cargo clean
