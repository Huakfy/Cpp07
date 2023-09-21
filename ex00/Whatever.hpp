/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:30:15 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/21 14:54:02 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER
# define WHATEVER

template <typename T>
void	swap(T &one, T &two) {
	T	temp = two;
	two = one;
	one = temp;
}

template <typename T>
T		min(T one, T two) {
	return (one < two)? one : two;
}

template <typename T>
T		max(T one, T two) {
	return (one > two)? one : two;
}

#endif