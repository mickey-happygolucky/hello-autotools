#ifndef HELLO_H
#define HELLO_H

#include <string>

class Hello {
    std::string to_say_;
public:
    explicit Hello(const std::string& to_say);
    void say() const;
};

#endif //HELLO_H
