#ifndef GOOGLE_TEST_PROBE_PERSON_H
#define GOOGLE_TEST_PROBE_PERSON_H


class Person {
private:
    int age;

public:
    int getAge() const;

    Person(int age);
    ~Person();
};


#endif //GOOGLE_TEST_PROBE_PERSON_H
