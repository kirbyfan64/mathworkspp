#include <vector>

std::vector<int> getMultiples(int number, int numcount)
{
    int counter = 0, multiples = 0, total = numcount;
    std::vector<int> result;
    while (multiples < total)
    {
        counter++;
        if ((counter % number) != 0)
        {
            continue;
        }
        multiples++;
        result.push_back(counter);
    }
    return result;
}
