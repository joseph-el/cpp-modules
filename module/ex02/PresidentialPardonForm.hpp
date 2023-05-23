#pragma once

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();
		virtual void action() const;
};