#include <iostream>
#include <iomanip>

#define PI 3.14

// Nao eh necessario usar funcoes estaticas em CPP
// Mas precisamos fazer isso em C# e Java

double circumference(double radius);
double volume(double radius);

     int main() {

        double radius, c, v;
		
      	std::cout << "Enter radius: ";
        std::cin >> radius;
        
	    c = circumference(radius);
		v = volume(radius);
		
	    std::cout << "Circumference: " << c;
        std::cout <<'\n';        
		std::cout << "Volume: " << v;
        std::cout <<'\n';        
    	std::cout << "PI value: " << PI;
        std::cout <<'\n';
		        
        return 0;       
    }
		
	  	double circumference(double radius)      {
	     	return 2.0 * PI * radius;     
   		}
		
		  double volume(double radius)      {
   			return 4.0 * PI * radius * radius * radius / 3.0;
   		}

    

	

	
