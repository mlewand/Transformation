
#ifndef TRANSFORMATION_CIRC_OUT_H
#define TRANSFORMATION_CIRC_OUT_H

#include "../TransformationBase.h"

class TransformationCircOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif