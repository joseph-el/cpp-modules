
# include "AForm.hpp"

# include <iostream>

# define pr(x) std::cout << x << std::endl;

class RobotomyRequestForm : public AForm {

    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &);
        RobotomyRequestForm(const RobotomyRequestForm &);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &);
        void action( void ) const;
        ~RobotomyRequestForm();
};