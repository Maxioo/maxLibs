//
// Created by Max on 2020/4/16.
//

#ifndef MAXLIBS_STRING_H
#define MAXLIBS_STRING_H

namespace MaxLib{
    class string{
    private:
        char* _data;
        int _data_len;
        int _capacity;

        int _count_len(const char*);

    public:
        explicit string(char* );
        explicit string(const char*);

        int get_len();

        ~string();
    };
}

#endif //MAXLIBS_STRING_H
