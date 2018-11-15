
#ifndef TRANSFORMATION_QUINT_IN_H
#define TRANSFORMATION_QUINT_IN_H

#include "../Base.h"

template < typename NumericType >
class TransformationQuintIn : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return c * ( t /= d ) * t * t * t * t + b;
	};
};

#endif