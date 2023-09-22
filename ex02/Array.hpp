/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:15:18 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/22 16:39:08 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
# define ARRAY

# include <string>
# include <iostream>

template<typename T>
class	Array {
	private:
		T		*_array;
		size_t	_size;
	public:
		Array() : _array(new T[0]), _size(0) {};
		Array(unsigned int n) : _array(new T[n]), _size(n) { for(unsigned int i = 0; i < n; i++) _array[i] = T(); };
		Array(const Array<T> &src) : _array(new T[src.size()]), _size(src.size()) { *this = src; };

		Array	&operator=(const Array<T> &src) {
			if (this != &src) {
				if (_array)
					delete[] _array;
				_array = new T[src.size()];
				for (unsigned int i = 0; i < _size; i++) _array[i] = src[i];
			}
			return *this;
		};

		~Array() {if (_array) delete[] _array;};

		size_t	size() const { return _size; };

		T		&operator[](unsigned int index) const{
			if (index >= _size)
				throw std::out_of_range("Value out of range");
			return _array[index];
		};
};

#endif