#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T *arr;
	unsigned int _size;
public:
	Array() : arr(nullptr), _size(0) {};

	Array(unsigned int n) : _size(n)
	{
		if (_size < 0)
			throw (IndexOutOfBounds());
		if (n == 0)
			arr = nullptr;
		else
			arr = new T[n];
	};

	Array(const Array &x)
	{
		this->arr = new T[x._size];
		_size = x._size;
		for (unsigned int i = 0; i < _size; i++)
			arr[i] = x.arr[i];
	};

	Array &operator=(const Array &x)
	{
		if (this == &x)
			return (*this);
		if (arr)
			delete[] arr;
		_size = x.n;
		this->arr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			arr[i] = x.arr[i];
		return (*this);
	};

	~Array()
	{
		if (arr)
			delete [] arr;
	};

	int size() const
	{
		return (_size);
	}

	class IndexOutOfBounds : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Index out of bounds!";
		}
	};

	T &operator[](unsigned int index)
	{
		if (index >= _size || index < 0 || arr == nullptr)
			throw (IndexOutOfBounds());
		return (arr[index]);
	}

	const T &operator[](unsigned int index) const
	{
		if (index >= _size || index < 0 || arr == nullptr)
			throw (IndexOutOfBounds());
		return (arr[index]);
	}
};

#endif
