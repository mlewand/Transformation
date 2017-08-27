#ifndef LINEAR_H
#define LINEAR_H

#include "./Base.h"

class TransformationLinear : public TransformationBase
{
  public:
	virtual float ease(float, float, float, float);
};

#endif