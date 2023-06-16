#include "ShrubberyCreationForm.hpp"

const std::string tree[] = {
	"          * * *    * *",
	"         * \\/ |    |/ *   *",
	"        \\/ / \\||/  /_/___/_",
	"    *  * * \\/   |/ \\/   *",
	"  *_\\__\\_\\   |  /_____/_    *",
	"           \\  | /          /",
	"  __ _-----`  |{,-----------~",
	"            \\ }{",
	"             }{{",
	"             }}{",
	"             {{}",
	"       , -=-~{ .-^- _",
	"             `}",
	"              {",
	""
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form(target, 145, 137) {
	std::cout << "ShrubberyCreationForm constuctor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called\n";
}

void ShrubberyCreationForm::action() const {
	std::cout<< "ShrubberyCreationForm executor called\n";
	std::ofstream file(Form::getName() + "_shrubbery");
	for (int i = 0; !tree[i].empty(); i++) {
		file << tree[i] << '\n';
	}
	file << Form::getName() << "_shrubbery";
	file.close();
}