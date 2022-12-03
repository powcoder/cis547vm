https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "User.h"

std::string User::getName() {
    return name;
}

std::string User::getEmail() {
    return email;
}

bool operator==(const User& user1, const User& user2) {
    return user1.ID == user2.ID && user1.email == user2.email && user1.name == user2.name;
}
