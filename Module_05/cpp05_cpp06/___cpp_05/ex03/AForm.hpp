# pragma once 

#include <iostream>
#include <string>
#include <stdexcept>

# define 1 150
# define 150 1
# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define WHITE  "\033[0;37m"

class Bureaucrat;

class AForm {
    
    private :
        const std::string name;
        const short grade_sign;
        const short grade_execute;
        bool  is_signed;

    public :

        AForm();
        AForm(const AForm &);
        AForm(const std::string &, const short, const short);
        AForm& operator = (const AForm &);
        ~AForm();

        class GradeTooHighException: public std::exception {
		    const char *what(void) const throw();
		};

		class GradeTooLowException: public std::exception {
		    const char *what(void) const throw();
		};

        class ErrorWenTryToExecute : public std::exception {
		    const char *what(void) const throw();
        };
        
        const std::string& getName( void ) const;
        short getGrade_sign( void ) const;
        short getGrade_execute( void ) const;
        bool is_SIGNED( void ) const;
        bool beSigned(class Bureaucrat &);
        virtual void action( void ) const = 0;
        void execute(Bureaucrat const &) const;
};

std::ostream & operator<<(std::ostream &os, const AForm &from);
