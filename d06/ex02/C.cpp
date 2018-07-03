/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 22:29:55 by ikozlov           #+#    #+#             */
/*   Updated: 2018/07/02 22:33:48 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

/*
 * C Class
*/

C::C(void) { }

C::~C(void) { }

C::C(const C &src)
{
	*this = src;
}

C
&C::operator= (const C &obj)
{
	(void)obj;
	return (*this);
}