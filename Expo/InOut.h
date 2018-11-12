
#ifndef TRANSFORMATION_EXPO_INOUT_H
#define TRANSFORMATION_EXPO_INOUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationExpoInOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return ( t / d ) * ( b + c ) + b;
	};
};

#endif