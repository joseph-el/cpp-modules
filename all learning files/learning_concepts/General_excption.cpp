/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   General_excption.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:13:21 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/05/20 15:53:32 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

using namespace std;

int main () {
    
    std::string input;
    std::getline(std::cin, input);

    try {
            input.empty() ? throw "empty input !" : puts("ST");
            (input == "MALLOC") ? throw (25) : puts("RT");
            (input == "REA") ? throw std::bad_exception() : puts("RO");
            !input.empty() ? throw false : puts("BR");
    }
    
    catch (exception &e) {
        std::cout << e.what() << std::endl;
    }

    catch (const char *strError) {
        std::cout << "Error " << strError << std::endl;
    }

    
    catch (bool Ret) {
        std::cout << "Bool EXC " << Ret << std::endl;
    }

    catch (...) {
        std::cout << "I can't find the Error" << std::endl;
    }
}