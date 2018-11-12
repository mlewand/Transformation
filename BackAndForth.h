#ifndef BACK_AND_FORTH_H
#define BACK_AND_FORTH_H

#include "./Base.h"

template < typename NumericType >
class TransformationBackAndForth : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		NumericType progress = t / d;

		if ( progress <= 0.5 ) {
			return ( ( 2 * progress ) * ( b + c ) ) + b;
		} else {
			return c - ( c - ( ( 1 - progress ) * 2 ) * c ) + b;
		}
	}
};

#endif