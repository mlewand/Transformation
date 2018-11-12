
#ifndef TRANSFORMATION_ELASTIC_IN_H
#define TRANSFORMATION_ELASTIC_IN_H

#include "../Base.h"

template < typename NumericType >
class TransformationElasticIn : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return ( t / d ) * ( b + c ) + b;
	};
};

#endif