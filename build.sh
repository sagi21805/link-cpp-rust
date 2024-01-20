echo "Building Rust"

cargo build --release

echo "Building C++"

g++ -o main main.cpp -L target/release -l:libvect.a