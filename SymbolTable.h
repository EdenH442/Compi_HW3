//
// Created by edenh on 06/12/2022.
//

#ifndef COMPI_HW3_SYMBOLTABLE_H
#define COMPI_HW3_SYMBOLTABLE_H

#include <stack>

class symTableBlkEntry
{
public:
    int offset;
    string type;
    string id;
    std::vector<string> types_vec;
    std::vector<string> names_vec;
    bool null_offset;
    bool is_func = false;

    symTableBlkEntry() = default;

    symTableBlkEntry(int offset, string id, string type, bool null_offset, bool is_func) :
            offset(offset), id(id), type(type),null_offset(null_offset), is_func(is_func){}

    symTableBlkEntry(int offset, string id, std::vector<string> names_vec, std::vector<string> types_vec, string type, bool null_offset, bool is_func) :
            offset(offset), id(id),names_vec(names_vec), types_vec(types_vec), type(type), null_offset(null_offset), is_func(is_func){}
};


#endif //COMPI_HW3_SYMBOLTABLE_H
