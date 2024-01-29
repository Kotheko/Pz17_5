#include <iostream>

class Vector
{
public:
    Vector() : x(1), y(1), z(1)
    {}

    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}

    double GetX()
    {
        return x;
    }

    double GetY()
    {
        return y;
    }

    double GetZ()
    {
        return z;
    }

    double GetModul()
    {
        return std::sqrt(x * x + y * y + z * z);
    }

private:
    double x;
    double y;
    double z;
};

int main()
{
    Vector v(4, 8, 5);

    std::cout << v.GetModul();
}