/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 22:29:55 by ikozlov           #+#    #+#             */
/*   Updated: 2018/07/02 22:32:01 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

/*
 * A Class
*/

A::A(void) { }

A::~A(void) { }

A::A(const A &src)
{
	*this = src;
}

A
&A::operator= (const A &obj)
{
	(void)obj;
	return (*this);
}
