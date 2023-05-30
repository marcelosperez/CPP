#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Example
{
public:
    static void announceThyself()
    {
        cout << "Hi, It's me" << endl;
    }
};

int main()
{
	
    Example::announceThyself();

      
    return 0;
    
}
	

	
