#ifndef BASE_H
#define BASE_H

template < typename T >
class TransformationBase {
public:
	virtual T ease( T, T, T, T ) = 0;
};

#endif