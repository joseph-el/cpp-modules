#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

class Form;

# define MAX_GRADE 150
# define MIN_GRADE 1

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
		void signForm(Form &form);
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat);