
#ifndef TRANSFORMATION_ELASTIC_INOUT_H
#define TRANSFORMATION_ELASTIC_INOUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationElasticInOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		NumericType s = 1.70158;
		NumericType p = 0;
		NumericType a = c;
		if (t == 0)
			return b;
		if ((t /= d / 2) == 2)
			return b + c;
		if (!p)
			p = d * (.3 * 1.5);
		if (a < std::abs(c))
		{
			a = c;
			NumericType s = p / 4;
		}
		else
			NumericType s = p / (2 * M_PI) * asin(c / a);
		if (t < 1)
			return -.5 * (a * pow(2, 10 * (t -= 1)) * sin((t * d - s) * (2 * M_PI) / p)) + b;
		return a * pow(2, -10 * (t -= 1)) * sin((t * d - s) * (2 * M_PI) / p) * .5 + c + b;
	};
};

#endif