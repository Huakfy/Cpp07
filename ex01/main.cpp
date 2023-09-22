/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:59:58 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/22 12:11:40 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <iomanip>

template<typename T>
void	f(T content) {
	std::cout << std::setprecision(2) << content << " ";
}

int		main(void) {
	int	i[5] = {0, 1, 2, 3, 4};
	iter(i, 5, f);

	std::cout << std::endl;

	char	c[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(c, 5, f);

	std::cout << std::endl;

	std::string	s[2] = {"Hello", "World!"};
	iter(s, 2, f);

	std::cout << std::endl;
	return 0;
}