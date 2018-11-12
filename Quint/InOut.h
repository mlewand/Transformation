
#ifndef TRANSFORMATION_QUINT_INOUT_H
#define TRANSFORMATION_QUINT_INOUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationQuintInOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return ( t / d ) * ( b + c ) + b;
	};
};

#endif