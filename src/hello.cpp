#include "hello.h"
#include <iostream>

Hello::Hello(const std::string& to_say) : to_say_(to_say) {
}

void Hello::say() const {
    std::cout << "Hello " << to_say_ << std::endl;
}
