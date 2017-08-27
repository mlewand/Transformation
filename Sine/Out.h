
#ifndef TRANSFORMATION_SINE_OUT_H
#define TRANSFORMATION_SINE_OUT_H

#include "../TransformationBase.h"

class TransformationSineOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif