
#ifndef TRANSFORMATION_EXPO_OUT_H
#define TRANSFORMATION_EXPO_OUT_H

#include "../TransformationBase.h"

class TransformationExpoOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif