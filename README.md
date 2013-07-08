mathworkspp
===========

A C++ port of Python Mathworks.

Sourceforge Page: https://sourceforge.net/projects/mathworkspp/

Directory layout:

include: Add this folder to your compiler's include path to use mathworks.
lib: Contains the Mathworks++ library, libmathworkspp.a.
src: Contains the Mathworks++ source.

Version history:

0.1: Initial commit. Have shapes.hpp done. Based on Mathworks 1.3.2.

0.2: Added namespaces. Have multiples, exponent done.

Working on the rest of Mathworks. Note that Mathworks++ releases will often lag behind the Mathworks releases.
The reason is that Python is 10x easier that C++.

Note: Mathworks++ requires C++ 11 support, which MinGW doesn't have. If you get "Unrecognized option: -std=gnu++11"
when running make, use TDM-GCC instead(http://tdm-gcc.tdragon.net/download).