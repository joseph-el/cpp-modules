# include "ShrubberyCreationForm.hpp"

const std::string tree[] = {

"                   ,@@@@@@@,                ",
"       ,,,.   ,@@@@@@/@@,  .oo8888o.        ",
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o       ",
"   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'      ",
"   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'      ",
"   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'       ",
"   `&%\ ` /%&'    |.|        \ '|8'         ",
"       |o|        | |         | |           ",
"       |.|        | |         | |           ",
"     /   \//_/__/  ,\_//__\\/.  \_//__/_    ",
};


ShrubberyCreationForm::ShrubberyCreationForm() :  AForm("Default", 145, 137) {
    std::cout << "default called of ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :  AForm(target, 145, 137) {
    std::cout << "by setting of ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Another) {
    std::cout << "copy constructor of ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &Another) {
    return *this;
}

void ShrubberyCreationForm::action( void ) {

    std::cout << "ShrubberyCreationForm action function called !" << std::endl;
    std::ofstream outfile(AForm::getName() + "_shrubbery");
    for (int i = 0, tree[i], i++)
        outfile << tree[i] << std::endl;
    outfile << Form::getName() << "_shrubbery";
	outfile.close();

}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "destroy of ShrubberyCreationForm" << std::endl;
}

