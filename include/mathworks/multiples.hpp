#ifndef MULTIPLES_HPP_INCLUDED
#define MULTIPLES_HPP_INCLUDED

#include <vector>

namespace mathworks
{
namespace multiples
{
//! Gets the first "numcount" multiples of "number".
/*! @param number The number to get the multiples of.
 @param numcount The number of multiples to get.
 @return An std::vector of the multiples.
*/
std::vector<int> getMultiples(int number, int numcount);
}
}

#endif // MULTIPLES_HPP_INCLUDED
