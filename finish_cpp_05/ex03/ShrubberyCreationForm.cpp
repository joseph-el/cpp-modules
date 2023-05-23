# include "ShrubberyCreationForm.hpp"

const std::string tree[] = {

"                   ,@@@@@@@,                ",
"       ,,,.   ,@@@@@@|@@,  .oo8888o.        ",
"    ,&%%&%&&%,@@@@@|@@@@@@,8888888|8o       ",
"   ,%&8%&&%&&%,@@@8@@@|@@@88888888|88'      ",
"   %&&%&%&|%&&%@@8@@| |@@@88888888888'      ",
"   %&&%| %&%%&&@@8 V |@@' `8888 `|88'       ",
"   `&%8 ` |%&'    |.|        8 '|8'         ",
"       |o|        | |         | |           ",
"       |.|        | |         | |           ",
"     |   8|_|__|  ,8_|__8|.  8_|__|_    ",
};


ShrubberyCreationForm::ShrubberyCreationForm() :  AForm("Default", 145, 137) {
    std::cout << "default called of ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :  AForm(target, 145, 137) {
    std::cout << "by setting of ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &) {
    std::cout << "copy constructor of ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &) {
    return *this;
}

void ShrubberyCreationForm::action( void ) const {

    std::ofstream outfile(std::string(AForm::getName() + "_shrubbery"));
    for (int i = 0; !tree[i].empty(); i++)
        outfile << tree[i] << std::endl;
    outfile << AForm::getName() << "_shrubbery";
	outfile.close();

}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "destroy of ShrubberyCreationForm" << std::endl;
}

