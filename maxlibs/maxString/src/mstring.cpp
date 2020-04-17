//
// Created by Max on 2020/4/16.
//
#include "../include/mstring.h"

namespace MaxLib{
    string::string(char *aa):_data(aa){
        _data_len = _count_len(aa);
    }
    string::string(const char *aa):_data(aa){
        _data_len = _count_len(aa);
    }

    int string::get_len() {
        return _data_len;
    }

    int string::_count_len(char *aa) {
        if(aa == nullptr){
            return 0;
        }
        int max_len = 0;
        for(int i = 0; aa[i] != '\0'; i++)
            max_len++;
        return max_len;
    }
}

