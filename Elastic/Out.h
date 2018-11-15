
#ifndef TRANSFORMATION_ELASTIC_OUT_H
#define TRANSFORMATION_ELASTIC_OUT_H

#include "../Base.h"

template < typename NumericType >
class TransformationElasticOut : public TransformationBase< NumericType > {
public:
	virtual NumericType ease( NumericType t, NumericType b, NumericType c, NumericType d ) {
		float s = 1.70158;
		float p = 0;
		float a = c;
		if (t == 0)
			return b;
		if ((t /= d) == 1)
			return b + c;
		if (!p)
			p = d * .3;
		if (a < std::abs(c))
		{
			a = c;
			float s = p / 4;
		}
		else
			float s = p / (2 * M_PI) * asin(c / a);
		return a * pow(2, -10 * t) * sin((t * d - s) * (2 * M_PI) / p) + c + b;
	};
};

#endif