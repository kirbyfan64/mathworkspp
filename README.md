mathworkspp
===========

A C++ port of Python Mathworks.  At the moment there is only one file, shapes.hpp. I am working on exponent.hpp.

Version history:

0.1: Initial commit. Have shapes.hpp done. Based on Mathworks 1.3.2.

Working on the rest of Mathworks. Note that Mathworks++ releases will often lag behind the Mathworks releases.
The reason is that Python is 10x easier that C++.

Note: Mathworks++ requires C++ 11 support, which MinGW doesn't have. If you get "Unrecognized option: -std=gnu++11"
when running make, use TDM-GCC instead(http://tdm-gcc.tdragon.net/download).