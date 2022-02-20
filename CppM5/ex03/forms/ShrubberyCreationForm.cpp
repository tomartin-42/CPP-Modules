/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:31:17 by tomartin          #+#    #+#             */
/*   Updated: 2022/02/10 10:46:40 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

SCF::SCF() : Form("SCF1", 145, 137) {}

SCF::SCF(std::string target) : Form(target, 145, 137), _target(target) {}

SCF::SCF(const SCF& other) : Form(other), _target(other._target) {}

SCF::~SCF() {}

SCF&	SCF::operator = (const SCF& other) {
	this->_target = other._target;
	return *this;
}

std::string	SCF::getTarget() {
	return this->_target;
}

void	SCF::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::fstream	file;
		try {
			file.open(this->_target + "_shrubbery", std::fstream::out);
			if (!file.is_open())
				throw 1;
		}
		catch (int i) {
			std::cerr << this->_target << " form can not open file 🚨 " << std::endl;
		}
	
		file << "                                               ." << std::endl;
        file << "                                    .         ;" << std::endl;
        file << "       .              .              ;%     ;; " << std::endl;
        file << "         ,           ,                :;%  %;" << std::endl;
        file << "          :         ;                   :;%;'     ., " << std::endl;
        file << " ,.        %;     %;            ;        %;'    ,;" << std::endl;
        file << "   ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        file << "    %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        file << "     ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        file << "      `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        file << "       `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        file << "          `:%;.  :;bd%;          %;@%;'" << std::endl;
        file << "            `@%:.  :;%.         ;@@%;' " << std::endl;
        file << "              `@%.  `;@%.      ;@@%;  " << std::endl;
		file << "                `@%%. `@%%    ;@@%;" << std::endl;
		file << "                  ;@%. :@%%  %@@%;" << std::endl;
		file << "                    %@bd%%%bd%%:;" << std::endl;
		file << "                      #@%%%%%:;;" << std::endl;
		file << "                      %@@%%%::;" << std::endl;
		file << "                      %@@@%(o);  . '" << std::endl;
		file << "                      %@@@%(o);  . '" << std::endl;
		file << "                      %@@@%(o);  . '" << std::endl;
		file << "                      %@@@%(o);  . '" << std::endl;
		file << "                      %@@@o%;:(.,'" << std::endl;
		file << "                  `.. %@@@o%::; " << std::endl;
		file << "                     `)@@@o%::;" << std::endl;
		file << "                      %@@(o)::;" << std::endl;
		file << "                     .%@@@@%::; " << std::endl;
		file << "                     ;%@@@@%::;." << std::endl;
		file << "                    ;%@@@@%%:;;;." << std::endl;
		file << "                ...;%@@@@@%%:;;;;,.." << std::endl;
		file.close();
}
