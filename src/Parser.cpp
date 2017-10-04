//
//  Parser.cpp
//  dpgen
//
//  Created by Andrew  on 10/3/17.
//  Copyright © 2017 Creator: Andrew Byron. All rights reserved.
//

#include "Parser.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
CParser::CParser()
{
    
}
CParser::~CParser()
{
    
}
void CParser::parseFile(void)
{
    std::string line;
    if (filePath != nullptr)
    {
        std::cout << " Parsing file" << std::endl;
        std::ifstream netList(filePath, std::ifstream::in);
        while ( std::getline(netList,line))
        {
            std::istringstream iss(line);
            
            // test
            
            std::cout << line << std::endl;
            
            // TODO: parse
        }
    }
    else
    {
        std::cout << " Just being careful: " << filePath << " doesn't exist" << std::endl;
    }
    
}
void CParser::set_filePath(char* inputFile)
{
    this->filePath = inputFile;
}
char* CParser::get_filePath()
{
    return this->filePath;
}
