# include "AForm.hpp"

#include <fstream>

class ShrubberyCreationForm : public AForm {

    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &);
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
        void action( void ) const;
        ~ShrubberyCreationForm();

};