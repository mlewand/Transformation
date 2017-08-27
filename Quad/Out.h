
#ifndef TRANSFORMATION_QUAD_OUT_H
#define TRANSFORMATION_QUAD_OUT_H

#include "../TransformationBase.h"

class TransformationQuadOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif