
#ifndef TRANSFORMATION_QUAD_INOUT_H
#define TRANSFORMATION_QUAD_INOUT_H

#include "../TransformationBase.h"

class TransformationQuadInOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif