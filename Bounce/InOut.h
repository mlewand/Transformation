
#ifndef TRANSFORMATION_BOUNCE_INOUT_H
#define TRANSFORMATION_BOUNCE_INOUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationBounceInOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		if (t < d / 2)
		{

			return TransformationBounceIn::ease(t * 2, 0, c, d) * .5 + b;
		}

		return TransformationBounceOut::ease(t * 2 - d, 0, c, d) * .5 + c * .5 + b;
	};
};

#endif