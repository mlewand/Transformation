
#ifndef TRANSFORMATION_QUART_IN_H
#define TRANSFORMATION_QUART_IN_H

#include "../Base.h"

template < typename NumericType >
class TransformationQuartIn : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		t = t / d;
		return c * t * t * t * t + b;
	};
};

#endif