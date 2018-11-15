
#ifndef TRANSFORMATION_CIRC_OUT_H
#define TRANSFORMATION_CIRC_OUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationCircOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return c * sqrt( 1 - ( t = t / d - 1 ) * t ) + b;
	};
};

#endif