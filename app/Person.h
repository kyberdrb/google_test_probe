#ifndef GOOGLE_TEST_PROBE_PERSON_H
#define GOOGLE_TEST_PROBE_PERSON_H

class Person {
private:
    int age = 0;

public:
    int getAge() const;

    explicit Person(int age);
    ~Person();
};

#endif //GOOGLE_TEST_PROBE_PERSON_H
