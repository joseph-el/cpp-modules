/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:26:13 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/15 11:30:55 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.hpp"

_STR::_STR(_ST s1, _ST s2, _ST s3, _ST s4) :
        S1(s1), S2(s2), buffer(s3), outfile(s4) {}

int main(int argc, char **argv)
{
    if (argc ^ 4)
        {FATAL("[😝]")}
    _STR          _str(argv[2], argv[3], "", _ST(argv[1]) + ".replace");
    std::ifstream f_inf(argv[1]);
    std::ofstream f_out(_str.outfile);
    if (!f_inf.is_open() or !f_out.is_open()) 
        {FATAL("[🤯]")}
    while (std::getline(f_inf, _str.GL))
    {
        for (int i = 0; i < (int)_str.GL.length(); i++)
            if (_str.GL.substr(i, _str.S1.length()) == _str.S1) 
                {_str.buffer += _str.S2; i += _str.S1.length() - 1;}
            else
                _str.buffer += _str.GL[i];
        f_out << _str.buffer << std::endl;
        _str.buffer = "";
    }
    f_inf.close(), f_out.close();
}