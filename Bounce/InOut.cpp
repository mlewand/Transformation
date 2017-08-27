
#include "./InOut.h"

float TransformationBounceInOut::ease(float t, float b, float c, float d)
{
	if (t < d / 2)
	{

		return TransformationBounceIn::ease(t * 2, 0, c, d) * .5 + b;
	}

	return TransformationBounceOut::ease(t * 2 - d, 0, c, d) * .5 + c * .5 + b;
}
