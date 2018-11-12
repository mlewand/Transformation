
#ifndef TRANSFORMATION_QUAD_INOUT_H
#define TRANSFORMATION_QUAD_INOUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationQuadInOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return ( t / d ) * ( b + c ) + b;
	};
};

#endif