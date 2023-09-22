/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:00:39 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/22 12:10:59 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
# define ITER

#include <string>

template<typename T>
void	iter(T *addr, size_t size, void (*f)(T&)) {
	for (size_t i = 0; i < size; i++)
		f(addr[i]);
}

#endif