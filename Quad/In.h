
#ifndef TRANSFORMATION_QUAD_IN_H
#define TRANSFORMATION_QUAD_IN_H

#include "../TransformationBase.h"

class TransformationQuadIn : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif