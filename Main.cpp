#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <cstring>
#include "app/Person.h"

int runTestSuite();
void createPerson();
void createAnotherPerson();
bool shouldRunTests(char** argument);

int main(int argc, char** argv) {
    if (shouldRunTests(&argv[1]))  {
        return runTestSuite();
    }

    createPerson();
    createAnotherPerson();
    return 0;
}

bool shouldRunTests(char** argument) {
    return *argument != NULL && (strncmp(*argument, "--tests", 7) == 0);
}

int runTestSuite() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

void createAnotherPerson() {
    Person *nextPerson = new Person(26);
    std::cout << "This person is " << nextPerson->getAge() << "." << std::endl;
    delete nextPerson;
}

void createPerson() {
    std::unique_ptr<Person> person(new Person(25));
    std::cout << "I'm " << person->getAge() << " years old." << std::endl;
}
