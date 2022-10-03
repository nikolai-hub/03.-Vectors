#ifndef VECTOR_COMPARISONS_H
#define VECTOR_COMPARISONS_H

#include "Vector.h"

class VectorLengthComparer {
public:
	bool operator() (const Vector& a, const Vector& b) const {
		return a.getLengthSq() < b.getLengthSq();
	}
};

template<typename T, typename Comp>
class ReverseComparer {
private:
	Comp comparer;
public :
	bool operator()(const T& a, const T& b)const {
		return comparer(b, a);
	}

};



#endif // !VECTOR_COMPARISONS_