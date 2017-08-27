
#ifndef TRANSFORMATION_CUBIC_OUT_H
#define TRANSFORMATION_CUBIC_OUT_H

#include "../TransformationBase.h"

class TransformationCubicOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif