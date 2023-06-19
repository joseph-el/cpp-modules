# include <iostream>

using namespace std;

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss



const std::string currentDateTime() {
    
    time_t     now = time(0);

    struct tm  tstruct;

    char       buf[80];


    tstruct = *localtime(&now);



    strftime(buf, sizeof(buf), "%G%m%M_", &tstruct);

    return buf;
}



int main() {
    
    
    std::cout << "[" << currentDateTime() << "]" << std::endl;
    
    
    
    getchar();  // wait for keyboard input
}