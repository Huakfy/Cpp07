/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:00:39 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/27 10:49:12 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
# define ITER

#include <string>

template<typename T, typename F>
void	iter(T *addr, size_t size, void (*f)(F &)) {
	for (size_t i = 0; i < size; i++)
		f(addr[i]);
}

#endif
