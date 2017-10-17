all:
	cd cpp && make
	cd rust && cargo build

test:
	cd cpp && make run
	cd rust && cargo test

clean:
	cd cpp && make clean
