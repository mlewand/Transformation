#ifndef CONSTANT_H
#define CONSTANT_H

#include "./Base.h"

// Constant type, meaning that it returns it's returnValue no matter of the base/change etc.
class TransformationConstant : public TransformationBase
{
	public:
		TransformationConstant( float );
		virtual float ease(float, float, float, float);
	private:
		float returnValue;
};

#endif