
#ifndef TRANSFORMATION_CUBIC_IN_H
#define TRANSFORMATION_CUBIC_IN_H

#include "../Base.h"

class TransformationCubicIn : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif