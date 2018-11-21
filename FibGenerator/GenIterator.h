
class GenIterator {
private:
	long long a_;
	long long b_;
	void move_to_the_next_element_() {
		long long c = b_;
		b_ += a_;
		a_ = c;
	}

public:
	GenIterator():a_(0), b_(1) {}
	GenIterator(const size_t& k) {
		long long a = 0;
		long long b = 1;
		for (size_t i = 0; i < k - 1; i++) {
			long long c = b;
			b += a;
			a = c;
		}
		a_ = a;
		b_ = b;
	}

	~GenIterator() {}

	GenIterator& operator++() {
		this->move_to_the_next_element_();
		return *this;
	}

	long long operator*() const {
		return a_;
	}

	bool operator!=(const GenIterator& x) const {
		return a_ != x.a_;
	}

	bool operator==(const GenIterator& x) const {
		return a_ == x.a_;
	}
};