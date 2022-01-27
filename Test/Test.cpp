#include <iostream>

class MyInt
{
public:
    int Value;

public:
    int operator--(int)
    {
        return Value;
    }

    int& operator--()
    {
        return Value;
    }

    MyInt operator++(int)
    {
        
        Value += 1;
        return Value;
    }

    MyInt Test()
    {
        Value += 1;
        return Value;
    }

    MyInt& operator++()
    {
        Value += 1;
        return *this;
    }

public:

    MyInt(int _Value)
        : Value(_Value)
    {
    }
};

int main(void)
{
    MyInt A = 0;
    A++;
    ++A;
    A.Test();
    int Value = 0;
    Value--;
    --Value;

}
   