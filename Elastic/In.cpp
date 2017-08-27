
#include "./In.h"
#include <math.h>

float TransformationElasticIn::ease(float t, float b, float c, float d)
{
	float s = 1.70158;
	float p = 0;
	float a = c;
	if (t == 0)
		return b;
	if ((t /= d) == 1)
		return b + c;
	if (!p)
		p = d * .3;
	if (a < abs(c))
	{
		a = c;
		float s = p / 4;
	}
	else
		float s = p / (2 * M_PI) * asin(c / a);
	return -(a * pow(2, 10 * (t -= 1)) * sin((t * d - s) * (2 * M_PI) / p)) + b;
}
