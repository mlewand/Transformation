#ifndef LINEAR_H
#define LINEAR_H

#include "./Base.h"

template < typename NumericType >
class TransformationLinear : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return ( t / d ) * ( b + c ) + b;
	};
};

#endif