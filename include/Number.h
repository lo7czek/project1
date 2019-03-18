#include <iostream>
#include <ctime>
#include <cstdlib>
#ifndef NUMBER_H
#endif NUMBER_H
class Number{
private:
    std::string value;
public:
    void setValue(std::string);
    std::string getValue();
    void show();
    Number operator+(Number);
    Number operator-(Number);
    Number operator*(Number);
    Number operator/(Number);
    int octToDec(std::string);
    std::string decToOct(int);
};
#endif
