#ifndef BACK_AND_FORTH_H
#define BACK_AND_FORTH_H

#include "./TransformationBase.h"

class TransformationBackAndForth : public TransformationBase
{
public:
	virtual float ease(float, float, float, float);
};

#endif