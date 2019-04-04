#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <cstring>
#include "app/Person.h"

bool shouldRunTests(char** argument);
int runTestSuite();
void createPerson();
void createAnotherPerson();

int main(int argc, char** argv) {
    if (shouldRunTests(&argv[1]))  {
        return runTestSuite();
    }

    createPerson();
    createAnotherPerson();
    return 0;
}

bool shouldRunTests(char** argument) {
    return *argument != nullptr && (strncmp(*argument, "--tests", 7) == 0);
}

int runTestSuite() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

void createPerson() {
    std::unique_ptr<Person> person(new Person(25));
    std::cout << "I'm " << person->getAge() << " years old." << std::endl;
}

void createAnotherPerson() {
    auto *nextPerson = new Person(26);
    std::cout << "This person is " << nextPerson->getAge() << "." << std::endl;

    auto *clonedPerson = nextPerson;

    std::cout << "nextPerson address\t\t" << nextPerson << std::endl;
    std::cout << "clonedPerson address\t" << clonedPerson << std::endl;

    delete nextPerson;
}
