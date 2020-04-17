//
// Created by Max on 2020/4/17.
//

#include "gtest/gtest.h"
#include "mstring.h"

TEST(stringTest, test1){
    char a[10] = "Test";
    MaxLib::string aa(a);
    EXPECT_EQ(aa.get_len(), 4);
}
