template<int n>
struct fib {
    enum { val = fib<n - 1>::val + fib<n - 2>::val };
};

template<>
struct fib<0> {
    enum { val = 0 };
};

template<>
struct fib<1> {
    enum { val = 1 };
};

int main() {
    std::cout << fib<5>::val << std::endl;
}
