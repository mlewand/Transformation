
#ifndef TRANSFORMATION_EXPO_OUT_H
#define TRANSFORMATION_EXPO_OUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationExpoOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		return (t == d) ? b + c : c * (-pow(2, -10 * t / d) + 1) + b;
	};
};

#endif