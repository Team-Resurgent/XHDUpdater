#include "Math.h"

#include <xtl.h>

int Math::ClampInt(int value, int min, int max)
{
    if (value < min) return min;
    if (value > max) return max;
    return value;
}

float Math::ClampFloat(float value, float min, float max)
{
    if (value < min) return min;
    if (value > max) return max;
    return value;
}

float Math::CopySign(float a, float b)
{
    return (b >= 0.0f) ? fabsf(a) : -fabsf(a);
}