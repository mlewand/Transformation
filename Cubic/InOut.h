
#ifndef TRANSFORMATION_CUBIC_INOUT_H
#define TRANSFORMATION_CUBIC_INOUT_H

#include "../Base.h"

class TransformationCubicInOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif