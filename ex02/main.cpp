/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 12:04:46 by zivanov           #+#    #+#             */
/*   Updated: 2026/02/14 12:20:39 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str;
	std::string	*ptr;
	std::string	&ref = str;

	str = "HI THIS IS BRAIN";
	ptr = &str;

	std::cout << "Printing Memory addresses:\n";
	std::cout << "Mem. address of str: " << &str << "\n";
	std::cout << "Mem. address HELD by ptr: " << ptr << "\n";
	std::cout << "Mem. address HELD by ref: " << &ref << "\n";
	std::cout << std::endl;

	std::cout << "Printing variable values;\n";
	std::cout << "str: " << str << "\n";
	std::cout << "ptr: " << *ptr << "\n";
	std::cout << "ref: " << ref << "\n";
	return (0);
}
