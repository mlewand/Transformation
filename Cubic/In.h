
#ifndef TRANSFORMATION_CUBIC_IN_H
#define TRANSFORMATION_CUBIC_IN_H

#include "../Base.h"

template < typename NumericType >
class TransformationCubicIn : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		t = t / d;
		return c * t * t * t + b;
	};
};

#endif