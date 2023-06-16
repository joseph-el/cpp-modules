#pragma once

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();
		virtual void action() const;
};