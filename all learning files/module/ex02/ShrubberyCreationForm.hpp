#pragma once

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm();
		virtual void action() const;
};