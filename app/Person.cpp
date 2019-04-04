#include "Person.h"

Person::Person(int age) {
    this->age = age;
}

Person::~Person() = default;

int Person::getAge() const {
    return age;
}
