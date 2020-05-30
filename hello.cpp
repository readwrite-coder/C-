#include <iostream>
#include "BST.h"
using std::string;

struct User{
    std::string first_name;
    std::string last_name;
    std::string get_name(){
        return first_name + " " + last_name;
    }
};
int main()
{
    User me;
    me.first_name = "Caleb";
    me.last_name = "Trinh";
    me.get_name();

    std::cout << "hello world!\n";
    string full_name = "Andrew Trinh";
    std::cout<<"Hello:"<< full_name<<std::endl;
    string names[] = {"Alec","Vince","Caleb","Andrew"};
    //int x = names.len();
    for (int i = 0; i < 4; i++){
        std::cout<<names[i]<< "\n";
    }

    //BST my_binary_search_tree = BST(0);
    return 0;
}