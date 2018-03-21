#include <tree.hpp>

using namespace AVLTree;

int main(int argc, char* argv[])
{ 
	TUI obj;    
    	std::vector<int> a;
    	int chosenValue ;

    	for (int i=1; i<argc; i++)
        	a.push_back(atoi(argv[i]));

    	a=obj.CorrectFunction(a);
        chosenValue=obj.ChosenFunction();

}

