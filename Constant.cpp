
#include "./Constant.h"

TransformationConstant::TransformationConstant( float retVal ) {
	this->returnValue = retVal;
}

float TransformationConstant::ease(float t, float b, float c, float d)
{
	return this->returnValue;
}