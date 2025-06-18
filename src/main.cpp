#include <iostream>

#include "foo.h"
#include "sum.h"

int main(int argc, char *argv[]) {
    Foo foo;
    foo.doSomething();
    std::cout << "Sum of 3 and 4 is: " << sum(3, 4) << std::endl;
    return 0;
}
