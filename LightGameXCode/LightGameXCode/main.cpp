#include <iostream>
#include "Light.h"

using namespace std;

int main() {
	cout << "Hello, welcome to Light Game\n";
    
    Light l;
    l.propogate();
    
    l.displayLight();
    
	return 0;
}