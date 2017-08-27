
#ifndef TRANSFORMATION_BOUNCE_OUT_H
#define TRANSFORMATION_BOUNCE_OUT_H

#include "../TransformationBase.h"

class TransformationBounceOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif