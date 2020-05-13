//
// Created by Max on 2020/4/16.
//
#include "../include/mstring.h"

namespace MaxLib{
    string::string(char *aa){
        _data_len = _count_len(aa);
        _capacity = (2 * _data_len) + 1;
        _data = new char[_capacity];
        for(int i = 0; i != _data_len; i++){
            _data[i] = aa[i];
        }
    }
    string::string(const char *aa){
        _data_len = _count_len(aa);
        _capacity = (2 * _data_len) + 1;
        _data = new char[_capacity];
        for(int i = 0; i != _data_len; i++){
            _data[i] = aa[i];
        }
    }

    int string::get_len() {
        return _data_len;
    }

    int string::_count_len(const char *aa) {
        if(aa == nullptr){
            return 0;
        }
        int max_len = 0;
        for(int i = 0; aa[i] != '\0'; i++)
            max_len++;
        return max_len;
    }

    string::~string() {
        delete [] _data;
    }
}

