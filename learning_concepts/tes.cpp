# include <iostream>

int main() {

    char * d = malloc(-1);

    try 
    {
         int x = 15;
         if (x == 15)
            throw  -2;
    }
    
    catch (int x) {

    }

    catch (...) {

    }

}