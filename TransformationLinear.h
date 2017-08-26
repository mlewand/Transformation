#ifndef TRANSFORMATION_LINEAR_H
#define TRANSFORMATION_LINEAR_H

#include "./TransformationBase.h"

class TransformationLinear : public TransformationBase
{
  public:
	virtual float ease(float, float, float, float);
};

#endif