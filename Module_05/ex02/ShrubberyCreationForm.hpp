# include "AForm.hpp"

# include <iostream>

class ShrubberyCreationForm : public AForm {

    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &);
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
        virtual void action( void );
        ~ShrubberyCreationForm();

};