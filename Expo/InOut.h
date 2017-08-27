
#ifndef TRANSFORMATION_EXPO_INOUT_H
#define TRANSFORMATION_EXPO_INOUT_H

#include "../TransformationBase.h"

class TransformationExpoInOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif