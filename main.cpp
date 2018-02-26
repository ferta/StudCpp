#include <iostream>
using namespace std;

void test(int *l) {
    std::cout << "l = " << l <<  std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int *pr;
    int r = 55;
    pr = &r;
    test(pr);
    return 0;
}

