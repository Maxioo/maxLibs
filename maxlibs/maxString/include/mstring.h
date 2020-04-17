//
// Created by Max on 2020/4/16.
//

#ifndef MAXLIBS_STRING_H
#define MAXLIBS_STRING_H

#define NULL 0
namespace MaxLib{
    class string{
    private:
        char* _data;
        int _data_len;

        int _count_len(char* );

    public:
        string(char* );
        string(const char*);

        int get_len();
    };
}

#endif //MAXLIBS_STRING_H
