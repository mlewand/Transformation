
#ifndef TRANSFORMATION_ELASTIC_IN_H
#define TRANSFORMATION_ELASTIC_IN_H

#include "../Base.h"

template < typename NumericType >
class TransformationElasticIn : public TransformationBase< NumericType > {
public:
		virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		NumericType s = 1.70158;
		NumericType p = 0;
		NumericType a = c;
		if (t == 0)
			return b;
		if ((t /= d) == 1)
			return b + c;
		if (!p)
			p = d * .3;
		if (a < std::abs(c))
		{
			a = c;
			s = p / 4;
		}
		else
			s = p / (2 * M_PI) * asin(c / a);
		return -(a * pow(2, 10 * (t -= 1)) * sin((t * d - s) * (2 * M_PI) / p)) + b;
	};
};

#endif