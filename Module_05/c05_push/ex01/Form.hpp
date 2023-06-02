# pragma once 

#include <iostream>
#include <string>
#include <stdexcept>

# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define WHITE  "\033[0;37m"

class Bureaucrat;

class Form {
    
    private :
        const std::string  name;
        const short         grade_sign;
        const short         grade_execute;
        bool                is_signed;

    public :

        Form();
        Form(const Form &);
        Form(const std::string &, const short, const short);
        Form& operator = (const Form &);
        ~Form();

        class GradeTooHighException: public std::exception {
			const char *what(void) const throw();
		};

		class GradeTooLowException: public std::exception {
		    const char *what(void) const throw();
		};

        const std::string& getName( void ) const;
        short getGrade_sign( void ) const;
        short getGrade_execute( void ) const;
        bool is_SIGNED( void ) const;
        bool beSigned(class Bureaucrat &);
};

std::ostream & operator<<(std::ostream &os, const Form &from);
