#include <iostream>


template<unsigned char f>
class Fibonachi 
{
public:
    static const int value = Fibonachi<f - 1>::value + Fibonachi<f - 2>::value;


};
template<>
class Fibonachi<1>
{
public:
    static const int value = 1;
};

template<>
class Fibonachi<0>
{
public:
    static const int value = 0;
};

int main()
{
    std::cout << Fibonachi<7>::value << std::endl;
}