
#ifndef TRANSFORMATION_QUINT_INOUT_H
#define TRANSFORMATION_QUINT_INOUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationQuintInOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		if ((t /= d / 2) < 1)
		{
			return c / 2 * t * t * t * t * t + b;
		}

		return c / 2 * ((t -= 2) * t * t * t * t + 2) + b;
	};
};

#endif