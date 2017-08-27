
#ifndef TRANSFORMATION_SINE_IN_H
#define TRANSFORMATION_SINE_IN_H

#include "../TransformationBase.h"

class TransformationSineIn : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif