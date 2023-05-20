# pragma once

# include <iostream>

class Bureaucrat {
    private :
        const std::string name;
        short grade;

    public :
        Bureaucrat();
        Bureaucrat(const std::string &, short);
        Bureaucrat(const Bureaucrat &);
        Bureaucrat& operator = (const Bureaucrat &);



        void GradeTooHighException(void) const;
        void GradeTooLowException(void) const;


        void increment(short);
        void decrement(short);
        std::string getName(void) const;
        short getGrade(void) const;

        ~Bureaucrat();
};

std::ostream& operator << (std::ostream& os, const Bureaucrat &);