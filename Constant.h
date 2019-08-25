#ifndef CONSTANT_H
#define CONSTANT_H

#include "./Base.h"

// Constant type, meaning that it returns it's returnValue no matter of the base/change etc.
template < typename T >
class TransformationConstant : public TransformationBase< T >
{
	public:
		TransformationConstant( T retVal ) {
			this->returnValue = retVal;
		};
		virtual T ease(T t, T b, T c, T d) {
			return this->returnValue;
		}
	private:
		T returnValue;
};

#endif