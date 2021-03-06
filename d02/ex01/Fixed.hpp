/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 10:06:06 by lhernand          #+#    #+#             */
/*   Updated: 2019/05/02 17:30:20 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed &operator=(Fixed const & rhs);

		int 					getRawBits(void) const;
		int 					toInt(void) const;
		float 				toFloat(void) const;
		void 				setRawBits(int const raw);

	private:
		int					_fixedNumber;
		static const uint8_t 	_bits;
};

std::ostream			&operator<<(std::ostream & lhs, Fixed const & rhs);
#endif
