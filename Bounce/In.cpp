
#include "./In.h"

float TransformationBounceIn::ease(float t, float b, float c, float d)
{
	return c - TransformationBounceOut::ease(d - t, 0, c, d) + b;
}
