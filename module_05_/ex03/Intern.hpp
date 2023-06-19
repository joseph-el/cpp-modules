# pragma once

# include "AForm.hpp"
# include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
    public :
        Intern();
        AForm* makeForm(const std::string &, const std::string &);
        ~Intern();
};