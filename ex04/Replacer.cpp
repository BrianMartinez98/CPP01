/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:47:37 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 13:45:23 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Replacer.hpp"
#include <iostream>
#include <fstream>

Replacer::Replacer(const std::string& filename, const std::string& s1, const std::string& s2) 
    : _filename(filename), _s1(s1), _s2(s2){
}

Replacer::~Replacer(){
}

std::string Replacer::_processLine(const std::string& line) const
{
    std::string result;
    size_t startPos = 0;
    size_t foundPos;

    while ((foundPos = line.find(this->_s1, startPos)) != std::string::npos)
    {
        result.append(line, startPos, foundPos - startPos);
        result.append(this->_s2);
        startPos = foundPos + this->_s1.length();
    }
    result.append(line.substr(startPos));
    
    return result;
}

bool Replacer::replaceWords() const
{
    std::ifstream inFile(this->_filename.c_str());
    if (!inFile.is_open())
    {
        std::cerr << "Error: Could not open the input file: " << this->_filename << std::endl;
        return false;
    }

    std::string outName = this->_filename + ".replace";
    std::ofstream outFile(outName.c_str());
    if (!outFile.is_open())
    {
        std::cerr << "Error: Could not open the output file: " << outName << std::endl;
        inFile.close();
        return false;
    }

    std::string line;
    while (std::getline(inFile, line))
    {
        outFile << this->_processLine(line);
        if (!inFile.eof())
            outFile << "\n";
    }

    inFile.close();
    outFile.close();
    
    return true;
}
