/// <summary>
/// small main program to test matrix class
/// included are some test to aid in writing correct methods
/// </summary>
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "MyVector3D.h"
#include "MyMatrix3.h"
#include <SFML\Graphics.hpp>
#include <string.h>

void testConstructors();

// you need more comments for Pete's sake
// pete was here again
// known bugs probably

int main()
{
	testConstructors();
	std::system("pause");
	return EXIT_SUCCESS;
}

void testConstructors()
{
	MyMatrix3 matrixA{};
	

	std::cout << "-------- default constructor--------------" << std::endl;
	std::cout << matrixA.toString() << std::endl;
	std::cout << "{ [ 0, 0, 0 ] [ 0, 0, 0 ] [ 0, 0, 0 ] }" << std::endl;
	matrixA = MyMatrix3{ 1.1,2.2,3.3,-4.4,5.5,6.6,7.7,8.8,9.9 };
	std::cout << "-------- 9 doubles constructor--------------" << std::endl;
	std::cout << matrixA.toString() << std::endl;
	std::cout << "{ [ 1.1, 2.2, 3.3 ] [ -4.4, 5.5, 6.6 ] [ 7.7, 8.8, 9.9 ] }" << std::endl;

	
	std::cout << "========================================" << std::endl;

	}
