echo "Building Rust"

cargo build --release

cmake -B ./build
cd build 
make -j4 
mv RUST_LINK ../RUST_LINK