#ifndef TRANSFORMATION_BASE_H
#define TRANSFORMATION_BASE_H

class TransformationBase {
	public:
		virtual float ease(float, float, float, float) = 0;
};

#endif