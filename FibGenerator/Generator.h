#include <iostream>

class Generator {

private:

	long long a_;
	long long b_;
	void toNext() {
		long long c = b_;
		b_ += a_;
		a_ = c;
	}

public:

	typedef long long result_type;

	Generator() : a_(0), b_(1) {}

	long long operator()() {
		long long result = a_;
		toNext();
		return result;
	}

};