#include <iostream>
using namespace std;

class lab {
private:
    int value;

public:
    lab(int val) : value(val) {}

    bool operator>=(const lab& other) const {
        return value >= other.value;
    }

    bool operator==(const lab& other) const {
        return value == other.value;
    }

    lab& operator=(const lab& other) {
        value = other.value;
        return *this;
    }

    lab& operator+=(const lab& other) {
        value += other.value;
        return *this;
    }

    lab& operator--() {
        --value;
        return *this;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    lab num1(5);
    lab num2(10);

    std::cout <<"Result of Greater or equal to is: "<< (num1 >= num2) << std::endl;
    std::cout <<"Result of equal condition of two numbers is: "<< (num1 == num2) << std::endl;

    lab num3 = num1;
    std::cout <<"Assignment of num3 value to n1" << num3.getValue() << std::endl;

    num1 += num2;
    std::cout <<"Result of += operator: "<< num1.getValue() << std::endl;

    --num1;
    std::cout <<"Result of Post decrement i.e -- operator is: "<< num1.getValue() << std::endl;

    return 0;
}
