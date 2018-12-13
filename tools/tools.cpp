#include "tools.h"

std::pair <float, float> computeab (const pos & pt1, const pos & pt2)
{
    float a = (float (uAbs(pt2.ord, pt1.ord)) / (float (uAbs (pt2.abs, pt1.abs))));
    float b = pt2.ord - a * pt2.abs;
    return std::make_pair (a,b);
}//computeab ()
