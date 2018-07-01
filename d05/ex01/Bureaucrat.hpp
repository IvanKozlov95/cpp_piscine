/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:29:20 by ikozlov           #+#    #+#             */
/*   Updated: 2018/06/30 20:06:23 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# define MIN_GRADE 1
# define MAX_GRADE 150

# define TOO_LOW_MSG "Grade is too low... Should be within [1, 150]"
# define TOO_HIGH_MSG "Grade is too high... Should be within [1, 150]"

class Form;

class	Bureaucrat
{
	public:

		/*
		 *	GradeTooHighException class
		 */
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException &src);

				virtual ~GradeTooHighException(void) throw();

				GradeTooHighException &operator= (const GradeTooHighException &obj);

				virtual const char	*what() const throw();
		};

		/*
		 *	GradeTooLowException class
		 */
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const GradeTooLowException &src);

				virtual ~GradeTooLowException(void) throw();

				GradeTooLowException &operator= (const GradeTooLowException &obj);

				virtual const char	*what() const throw();
		};

		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);

		Bureaucrat				&operator= (const Bureaucrat &src);
		friend std::ostream		&operator<< (std::ostream &out,\
				const Bureaucrat &obj);

		int						getGrade(void) const;
		std::string				getName(void) const;

		void					setName(std::string name);
		void					incGrade(void);
		void					decGrade(void);

		void					signForm(Form &form);

	private:
		int				_grade;
		std::string		_name;
};

#endif