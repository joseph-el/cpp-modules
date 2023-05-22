# include "Bureaucrat.hpp"

int main(void)
{

    // {
    //     Bureaucrat RET("NAME", 30);
    //     Bureaucrat SET = RET;

    //     puts("_-----------_");

    //     std::cout << "check1 " << SET.getName() << std::endl;
    //     std::cout << "check2 " << RET.getName() << std::endl;
    // }

    // return (0);

    {
        Bureaucrat RET("JOSEPH", -1);
        Bureaucrat SET = RET;
        try {

            SET.increment();
            SET.decrement();

        }
        catch (const Bureaucrat &e) {
            std::cout << e;
        }
        catch (const std::exception &MsgError) {
            std::cout << MsgError.what();
        }


        return EXIT_SUCCESS;
    }

    {
        // learn concepts
        int xx = 1;
        char *RE = new char[xx];
        try {
            !RE ? throw "New Error !" : 0;
            std::cout << "IAM STILL HERE !!" << std::endl;
        }
        catch (const char *msgError) {
            std::cout << "Error Msg : " << msgError << std::endl;
        }
        std::cout << "Program still running !" << std::endl;
    }

    return (EXIT_SUCCESS);
}