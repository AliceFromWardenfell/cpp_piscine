#pragma once

#include <iostream>
#include <stdexcept>

template<typename T = int>
class Array
{
	public:

		Array(void)						: _array(new T[0]()), _length(0) {}
		Array(unsigned int n)			: _array(new T[n]()), _length(n) {}
		Array(Array const & instance)	: _array(new T[instance._length]()), _length(instance._length)
		{
			for (size_t i = 0; i < instance._length; i++)
				this->_array[i] = instance._array[i];
		}

		Array&	operator=(Array const & instance)
		{
			if (this->_length != instance._length)
				throw(std::length_error("assignment to an array of different lenght"));
			for (size_t i = 0; i < this->_length; i++)
				this->_array[i] = instance._array[i];
			return *this;
		}
		
		T&		operator[](size_t index)
		{
			if (index >= this->_length)
				throw(std::out_of_range("reference to an element out of range of an array"));
			return this->_array[index];
		}

		T		operator[](size_t index) const
		{
			if (index >= this->_length)
				throw(std::out_of_range("reference to an element out of range of an array"));
			return this->_array[index];
		}

		~Array(void) { delete [] this->_array; }

	private:

		T*		_array;
		size_t	_length;

	public:

		size_t	size(void) const { return this->_length; }

};

template<>
class Array<char>
{
	public:

		Array(void)						: _array(new char[0]()), _length(0) {}
		Array(unsigned int n)			: _array(new char[n + 1]()), _length(n) {}
		Array(Array const & instance)	: _array(new char[instance._length + 1]()), _length(instance._length)
		{
			for (size_t i = 0; i < instance._length; i++)
				this->_array[i] = instance._array[i];
			this->_array[this->_length] = '\0';
		}

		Array&	operator=(Array const & instance)
		{
			if (this->_length != instance._length)
				throw(std::length_error("assignment to an array of different lenght"));
			for (size_t i = 0; i < this->_length; i++)
				this->_array[i] = instance._array[i];
			return *this;
		}
		
		char&	operator[](size_t index)
		{
			if (index > this->_length)
				throw(std::out_of_range("reference an element out of range of an array"));
			return this->_array[index];
		}

		char	operator[](size_t index) const
		{
			if (index >= this->_length)
				throw(std::out_of_range("reference to an element out of range of an array"));
			return this->_array[index];
		}

		~Array(void) { delete [] this->_array; }

	private:

		char*	_array;
		size_t	_length;

	public:

		size_t	size(void) const { return this->_length; }

};
