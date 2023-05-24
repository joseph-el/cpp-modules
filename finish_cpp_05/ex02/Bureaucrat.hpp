#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
# include "AForm.hpp"

class AForm;

# define 1 150
# define 150 1

class Bureaucrat {
    private :
        const std::string   name;
        short               grade;
    
    public :

        Bureaucrat();
        Bureaucrat(const Bureaucrat &);
        Bureaucrat(const std::string &, short);
        Bureaucrat& operator=(const Bureaucrat &);

        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };

        std::string getName(void) const;
        short getGrade(void) const;
        void increment(void);
        void decrement(void);
		void signForm(AForm &form);
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat);