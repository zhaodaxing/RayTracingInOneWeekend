#pragma once
#include <cmath>
#include <limits>
#include <memory>
#include <cstdlib>

inline double random_double()
{
	// Returns a random real in [0, 1)
	return rand() / (RAND_MAX + 1.0);
}

inline double ramdom_double(double min, double max)
{
	// Returns a radom real in [min, max).
	return min + (max - min) * random_double();
}
// Usings
using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees)
{
	return degrees * pi / 180.0f;
}

inline double clamp(double x, double min, double max)
{
	if (x < min) return min;
	if (x > max) return max;
	return x;
}

// Common Headers

#include "ray.h"
#include "vec3.h"