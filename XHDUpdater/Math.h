#pragma once

class Math
{
public:
    static int ClampInt(int value, int min, int max);
    static float ClampFloat(float value, float min, float max);
    static float CopySign(float a, float b);
};
