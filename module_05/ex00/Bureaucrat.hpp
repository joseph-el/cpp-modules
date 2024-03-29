# pragma once

# include <iostream>
#include <exception>

# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define WHITE  "\033[0;37m"

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
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
