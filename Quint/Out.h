
#ifndef TRANSFORMATION_QUINT_OUT_H
#define TRANSFORMATION_QUINT_OUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationQuintOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return c * ( ( t = t / d - 1 ) * t * t * t * t + 1 ) + b;
	};
};

#endif