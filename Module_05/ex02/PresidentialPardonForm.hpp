# include "AForm.hpp"

# include <iostream>

# define pr(x) std::cout << x << std::endl;

class PresidentialPardonForm : public AForm {

    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &);
        PresidentialPardonForm(const PresidentialPardonForm &);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &);
        virtual void action( void );
        ~PresidentialPardonForm();
};