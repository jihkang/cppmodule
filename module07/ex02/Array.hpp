#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array {
public:
	Array<T>() : _size(0), data(nullptr) {
	}
	~Array<T> () {
		if (_size > 0)
			delete [] data;
	}
	Array<T>(int amount) : _size(amount) {
		if (amount < 0) {
			throw (std::overflow_error(this->indexDeposit()));
		}
		data = new T [amount];
	}

	Array<T>(const Array<T>& arr) :data(nullptr) {
		this->_size = arr._size;
		*this = arr;		
	}

	Array<T>& operator=(const Array<T>& arr) {
		if (this == &arr)
			return *this;
		if (this->data != nullptr) {
			delete [] this->data;
		}
		this->data = new T [this->_size];
		for (int i = 0; i < _size; ++i) {
			this->data[i] = arr[i];
		}
		return (*this);
	}

	T& operator[] (const int idx) const {
		if (idx >= _size) {
			throw (std::overflow_error(this->indexOutouf()));
		} else if (idx < 0) {
			throw (std::overflow_error(this->indexDeposit()));
		}
		return (this->data[idx]);
	}

	int size() const {
		return (_size);
	}
	const char * indexDeposit() const {
		return ("cant deposite value");
	}
	const char * indexOutouf() const {
		return ("Index out of bounds");
	}
private:
	T* data;
	int _size;
};

#endif