
#ifndef TRANSFORMATION_QUAD_OUT_H
#define TRANSFORMATION_QUAD_OUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationQuadOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return ( t / d ) * ( b + c ) + b;
	};
};

#endif