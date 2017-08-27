
#ifndef TRANSFORMATION_BOUNCE_INOUT_H
#define TRANSFORMATION_BOUNCE_INOUT_H

#include "./In.h"
#include "./Out.h"

class TransformationBounceInOut : public TransformationBounceIn
{
  public:
	virtual float ease(float, float, float, float);
};

#endif