
#ifndef TRANSFORMATION_SINE_INOUT_H
#define TRANSFORMATION_SINE_INOUT_H

#include "../TransformationBase.h"

class TransformationSineInOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif