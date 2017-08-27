
#ifndef TRANSFORMATION_ELASTIC_INOUT_H
#define TRANSFORMATION_ELASTIC_INOUT_H

#include "../TransformationBase.h"

class TransformationElasticInOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif