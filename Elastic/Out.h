
#ifndef TRANSFORMATION_ELASTIC_OUT_H
#define TRANSFORMATION_ELASTIC_OUT_H

#include "../TransformationBase.h"

class TransformationElasticOut : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif