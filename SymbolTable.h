//
// Created by edenh on 06/12/2022.
//

#ifndef COMPI_HW3_SYMBOLTABLE_H
#define COMPI_HW3_SYMBOLTABLE_H

enum ExpType {
    INT_EXP,
    BYTE_EXP,
    BOOL_EXP,
    STRING_EXP
};

class SymbolTable {
public:

private:
    struct SymEntry {
        string name;
        ExpType type;
        int offset;
    };

};


#endif //COMPI_HW3_SYMBOLTABLE_H
