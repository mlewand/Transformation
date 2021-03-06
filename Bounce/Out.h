
#ifndef TRANSFORMATION_BOUNCE_OUT_H
#define TRANSFORMATION_BOUNCE_OUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationBounceOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		if ((t /= d) < (1 / 2.75))
		{
			return c * (7.5625 * t * t) + b;
		}
		else if (t < (2 / 2.75))
		{
			t = t - (1.5 / 2.75);
			return c * (7.5625 * t * t + .75) + b;
		}
		else if (t < (2.5 / 2.75))
		{
			t = t - (2.25 / 2.75);
			return c * (7.5625 * t * t + .9375) + b;
		}
		else
		{
			t = t - (2.625 / 2.75);
			return c * (7.5625 * t * t + .984375) + b;
		}
	};
};

#endif