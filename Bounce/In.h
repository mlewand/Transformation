
#ifndef TRANSFORMATION_BOUNCE_IN_H
#define TRANSFORMATION_BOUNCE_IN_H

#include "./Out.h"

class TransformationBounceIn : public TransformationBounceOut
{
  public:
	virtual float ease(float, float, float, float);
};

#endif