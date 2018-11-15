
#ifndef TRANSFORMATION_SINE_OUT_H
#define TRANSFORMATION_SINE_OUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationSineOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return c * sin(t / d * (M_PI / 2)) + b;
	};
};

#endif