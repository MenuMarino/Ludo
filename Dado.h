#include <iostream>
#include <ctime>
#include <cstdlib>  
using namespace std;

struct Dado{
Dado(){};
int lanzar(){  
srand(time(0)); 
return  ((rand() % 6) + 1);
}
};


