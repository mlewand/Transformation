
#include "./BackAndForth.h"

float TransformationBackAndForth::ease(float t, float b, float c, float d)
{
	float progress = t / d;

	if (progress <= 0.5)
	{
		return ((2 * progress) * (b + c)) + b;
	}
	else
	{
		return c - (c - ((1 - progress) * 2) * c) + b;
	}
};