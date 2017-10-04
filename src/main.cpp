//
//  main.cpp
//  dpgen
//
//  Created by Andrew  on 10/3/17.
//  Copyright © 2017 Creator: Andrew Byron. All rights reserved.
//

#include <iostream>
#include "Parser.hpp"
int main(int argc, const char * argv[])
{
    CParser* Parser = new CParser();
    
    
    if (argc != 3)
    {
        std::cout << " Usage: dpgen netlistFile verilogfile" << std::endl;
        
    }
    else
    {
        FILE* testFILE;
        testFILE = fopen((const char*)argv[1], "r");
        if  (testFILE != nullptr)
        {
            fclose(testFILE);
            
            Parser->set_filePath((char*)argv[1]);
            
            Parser->parseFile();

        }
        else
        {
            std::cout <<  " " << argv[1] << " does not exist. " << std::endl;
        }
        
        
    }
    delete Parser;
    return 0;
}
