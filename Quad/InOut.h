
#ifndef TRANSFORMATION_QUAD_INOUT_H
#define TRANSFORMATION_QUAD_INOUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationQuadInOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		if ((t /= d / 2) < 1)
		{
			return c / 2 * t * t + b;
		}

		return -c / 2 * ((--t) * (t - 2) - 1) + b;
	};
};

#endif