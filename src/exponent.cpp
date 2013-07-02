namespace mathworks
{
namespace exponent
{

int square(int base)
{
    return (base * base);
}

double square(double base)
{
    return (base * base);
}

int cube(int base)
{
    return (base * base * base);
}

double cube(double base)
{
    return (base * base * base);
}

int calc(int base, int power)
{
    int newbase = base; int i = 1;
    while (i < power)
    {
        newbase = newbase * base;
        i++;
    }
    return newbase;
}

double calc(double base, int power)
{
    double newbase = base; int i = 1;
    while (i < power)
    {
        newbase = newbase * base;
        i++;
    }
    return newbase;
}
}
}
