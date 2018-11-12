
#ifndef TRANSFORMATION_QUART_OUT_H
#define TRANSFORMATION_QUART_OUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationQuartOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return ( t / d ) * ( b + c ) + b;
	};
};

#endif