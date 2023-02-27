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
			throw (std::overflow_error("cant make deposite value"));
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
		if (idx >= _size || idx < 0) {
			throw (std::overflow_error("Index out of bounds"));
		}
		return (this->data[idx]);
	}

	int size() const {
		return (_size);
	}

private:
	T* data;
	int _size;
};

#endif