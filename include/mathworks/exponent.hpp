#ifndef EXPONENT_HPP_INCLUDED
#define EXPONENT_HPP_INCLUDED

namespace mathworks
{
namespace exponent
{
//! Gets the square of the number.
/*! @param base The base to square.
   @return The square of the numbers.
*/
int square(int base);
//! Gets the square of the number.
/*! @param base The base to square.
  @return The square of the numbers.
*/
double square(double base);
//! Gets the cube of the number.
/*! @param base The base to cube.
  @return The cube of the numbers.
*/
int cube(int base);
//! Gets the cube of the number.
/*! @param base The base to cube.
 @return The cube of the numbers.
*/
double cube(double base);
//! Raises a number to a power.
/*! @param base The base.
 @param power The power to raise "base" to.
 @return The result of the calculation.
*/
int calc(int base, int power);
//! Raises a number to a power.
/*! @param base The base.
 @param power The power to raise "base" to.
 @return The result of the calculation.
*/
double calc(double base, int power);
}
}

#endif // EXPONENT_HPP_INCLUDED
