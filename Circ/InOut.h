
#ifndef TRANSFORMATION_CIRC_INOUT_H
#define TRANSFORMATION_CIRC_INOUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationCircInOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		if ((t /= d / 2) < 1)
			return -c / 2 * (sqrt(1 - t * t) - 1) + b;
		return c / 2 * (sqrt(1 - (t -= 2) * t) + 1) + b;
	};
};

#endif