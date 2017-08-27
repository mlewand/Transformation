
#ifndef TRANSFORMATION_CIRC_INOUT_H
#define TRANSFORMATION_CIRC_INOUT_H

#include "../TransformationBase.h"

class TransformationCircInOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif