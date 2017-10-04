//
//  Parser.hpp
//  dpgen
//
//  Created by Andrew  on 10/3/17.
//  Copyright © 2017 Creator: Andrew Byron. All rights reserved.
//

#ifndef Parser_hpp
#define Parser_hpp

#include <stdio.h>

class CParser
{
public:
    CParser();
    ~CParser();
    
    void parseFile(void);
    
    char* get_filePath( void );
    void set_filePath( char* inputFile );
    
private:
    char* filePath;
    
};
#endif /* Parser_hpp */
