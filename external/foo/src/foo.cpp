#include <iostream>

#include "foo.h"

Foo::Foo() {
    std::cout << "Foo constructor called!" << std::endl;
}

Foo::~Foo() {
    std::cout << "Foo destructor called!" << std::endl;
}

void Foo::doSomething() {
    std::cout << "Foo is doing something!" << std::endl;
}
