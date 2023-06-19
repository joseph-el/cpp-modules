# if !defined(HARL_HPP)
# define HARL_HPP

# include <string>
# include <iostream>

# define INFO_MSG "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
# define ERROR_MSG "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now."
# define DEBUG_MSG "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!"
# define WARNING_MSG "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month."
# define NOTHING_MSG "Probably complaining about insignificant problems"

class Harl {
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public :
        Harl();
        void complain( std::string level );
        void (Harl::*func)(void);
};

# endif