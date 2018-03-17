#include <tree.hpp>
#include <vector>
#include <iostream>

using namespace AVLTree;

int main(int argc, char* argv[])
{ 
    TREE obj;    
    std::vector<int> a;
    int chosenValue ;

    for (int i=1; i<argc; i++)
        a.push_back(atoi(argv[i]));
    if (obj.CorrectFunction(a)==1)
        chosenValue=obj.ChosenFunction();
    else
    {
        std::cout<<"Не все значения уникальны"<<std::endl;
        chosenValue=8;
    }
}

