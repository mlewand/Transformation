#ifndef BASE_H
#define BASE_H

class TransformationBase {
	public:
		virtual float ease(float, float, float, float) = 0;
};

#endif