#include <gtest/gtest.h>
#include "Member.h"
#include <string>

TEST(MemberTest, SettersAndGetters)
{
    Member member;
    std::string name = "Minrutha";
    member.setName(name);

    int age = 19;
    member.setAge(age);

    int dateOfBirth = 2006;
    member.setDateOfBirth(dateOfBirth);

    EXPECT_EQ(member.getName(), "Minrutha");
    EXPECT_EQ(member.getAge(), 19);
    EXPECT_EQ(member.getDateOfBirth(), 2006);
}