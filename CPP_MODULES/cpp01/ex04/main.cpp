/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:08:25 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/15 16:08:26 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>


void	ft_replace(std::string *line, std::string to_r, std::string r_w)
{
	size_t	start_pos;

	while ((start_pos = (*line).find(to_r)) != std::string::npos)
	{
		(*line).erase(start_pos, to_r.length());
		(*line).insert(start_pos, r_w);
	}
}


int main()
{
    std::string filename;
    std::string replacer = ".replacer";
    std::string s1;
    std::string s2;
    std::string text;
    std::cout << "What file do you wanna read? ";
	std::cin >> filename;
	std::cout << "What phrase/word you wanna replace in the file? ";
	std::cin >> s1;
	std::cout << "What phrase/word do you wanna use instead? ";
	std::cin >> s2;

    std::string append_file_name = filename;
    append_file_name.append(replacer);
    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open())
	{
		std::cerr << "error in opening input file" << std::endl;
		return (-1);
	}
    //tellg() restituisce posizione corrente di lettura
    std::streampos currentPos = inFile.tellg();
    //seekg(byte da spostare rispetto al posizione specificata nel secondo parametro, da dove inizia a contare il primo parametro in questo casa dalla fine) 
    inFile.seekg(0, std::ios::end);
    if (inFile.tellg() == 0)
        std::cout << "Input file is empty" << std::endl;
    else  
    { 
        inFile.seekg(currentPos);
        std::ofstream outfile(append_file_name.c_str());
        if(!outfile.is_open())
	    {
	    	std::cerr << "error in opening output file" << std::endl;
            return (-1);
	    }
        while (getline(inFile, text)) 
        {
            ft_replace(&text, s1, s2);
            if (!std::cin.eof())
                outfile << text << std::endl;
        }
        outfile.close();
    }
    inFile.close();
    return 0;
}