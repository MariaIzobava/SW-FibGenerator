#include "Generator.h"

template <class TGen>
class FibIterator {

public:

	typedef long long type;

	FibIterator(TGen gen) : gen_(gen) {
		value_ = gen_();
	}

	FibIterator& operator++() {
		value_ = gen_();
		return *this;
	}

	long long operator*() const {
		return value_;
	}

	bool operator!=(const FibIterator& x) const {
		return value_ != x.value_;
	}

	bool operator==(const FibIterator& x) const {
		return value_ == x.value_;
	}

private:
	TGen gen_;

	type value_;

};