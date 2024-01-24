echo "Building Rust"

cargo build --release

echo "Building C"

gcc -o main main.c -L target/release -l:libvect.a