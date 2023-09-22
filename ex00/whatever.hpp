/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:59:01 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/22 11:36:16 by mjourno          ###   ########.fr       */
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
T		&min(T &one, T &two) {
	return (one < two)? one : two;
}

template <typename T>
T		&max(T &one, T &two) {
	return (one > two)? one : two;
}

#endif