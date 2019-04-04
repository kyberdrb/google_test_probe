#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../app/Person.h"

namespace {
class TestPerson : public ::testing::Test {
    protected:
        Person *person_22_years_old = nullptr;
        Person *person_58_years_old = nullptr;

        void SetUp() override
        {
            person_22_years_old = new Person(22);
            person_58_years_old = new Person(58);
        }

        void TearDown() override
        {
            delete person_22_years_old;
            delete person_58_years_old;
        }
    };

    TEST_F(TestPerson, personIs22YearsOld) {
        ASSERT_EQ(22, person_22_years_old->getAge());
    }

    TEST_F(TestPerson, personIs58YearsOld) {
        ASSERT_EQ(58, person_58_years_old->getAge());
    }
}
