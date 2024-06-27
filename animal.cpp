#include <iostream>
class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};
class Cat : public Animal {
public:
    void speak() override {
        std::cout << "Meow!" << std::endl;
    }
};
class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Cat cat;
    Dog dog;
    std::cout << "Cat says: ";
    cat.speak();

    std::cout << "Dog says: ";
    dog.speak();

    return 0;
}
