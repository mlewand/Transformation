
#ifndef TRANSFORMATION_ELASTIC_IN_H
#define TRANSFORMATION_ELASTIC_IN_H

#include "../TransformationBase.h"

class TransformationElasticIn : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif