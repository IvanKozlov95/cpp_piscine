/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:55:11 by ikozlov           #+#    #+#             */
/*   Updated: 2018/07/03 16:58:16 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <iostream>

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	srand(time(NULL));

	CentralBureaucracy	cb;
	std::cout << "** Made central Bureaucracy **" << std::endl;

	try
	{
		std::cout << std::endl << "** Making Bureaucracy do stuff, but nothing should happen due to lack of executer, signer and target **" << std::endl;
		cb.doBureaucracy();

		std::cout << std::endl << "** Generating 6 signers **" << std::endl;
		cb.feedSigner(*new Bureaucrat("Arta", 1));
		cb.feedSigner(*new Bureaucrat("Bella", 10));
		cb.feedSigner(*new Bureaucrat("Caddie", 25));
		cb.feedSigner(*new Bureaucrat("Diana", 45));
		cb.feedSigner(*new Bureaucrat("Diana", 45));
		cb.feedSigner(*new Bureaucrat("Eve", 80));
		cb.feedSigner(*new Bureaucrat("Gracia", 120));

		std::cout << std::endl << "** Making Bureaucracy do stuff, but nothing should happen due to lack of executer and target **" << std::endl;
		cb.doBureaucracy();

		std::cout << std::endl << "** Generating 4 executer **" << std::endl;
		cb.feedExecuter(*new Bureaucrat("Lydeka", 1));
		cb.feedExecuter(*new Bureaucrat("Mikaela", 20));
		cb.feedExecuter(*new Bureaucrat("Ninian", 60));
		cb.feedExecuter(*new Bureaucrat("Onna", 110));
		cb.feedExecuter(*new Bureaucrat("Onna", 110));

		std::cout << std::endl << "** Making Bureaucracy do stuff, but nothing should happen due to lack targets **" << std::endl;
		cb.doBureaucracy();

		std::cout << std::endl << "** Generating 26 targets **" << std::endl;
		cb.queueUp("Apple");
		cb.queueUp("Banana");
		cb.queueUp("Carrot");
		cb.queueUp("Daikon");
		cb.queueUp("Elephant");
		cb.queueUp("Frost");
		cb.queueUp("Giant");
		cb.queueUp("Hill");
		cb.queueUp("Igloo");
		cb.queueUp("Jack");
		cb.queueUp("Kangaroo");
		cb.queueUp("Lamp");
		cb.queueUp("Michael");
		cb.queueUp("Niagra");
		cb.queueUp("Ostrich");
		cb.queueUp("Platypus");
		cb.queueUp("Quilt");
		cb.queueUp("Razor");
		cb.queueUp("Sand");
		cb.queueUp("Time");
		cb.queueUp("Uvula");
		cb.queueUp("Vuvuzuela");
		cb.queueUp("Walrus");
		cb.queueUp("Xylophone");
		cb.queueUp("Young");
		cb.queueUp("Zebra");

		std::cout << std::endl << "** Making Bureaucracy do stuff, watch the magic! **" << std::endl;
		cb.doBureaucracy();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
