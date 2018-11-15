
#ifndef TRANSFORMATION_EXPO_INOUT_H
#define TRANSFORMATION_EXPO_INOUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationExpoInOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		if (t == 0)
		{
			return b;
		}

		if (t == d)
		{
			return b + c;
		}

		if ((t /= d / 2) < 1)
		{
			return c / 2 * pow(2, 10 * (t - 1)) + b;
		}

		return c / 2 * (-pow(2, -10 * --t) + 2) + b;
	};
};

#endif