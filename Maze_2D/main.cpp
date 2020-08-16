#include <iostream>
#include <vector>     
#include "MyMaze2dGenerator.h"
#include "SimpleMaze2dGenerator.h"
#include "searchAlg.h"                      
#include "MazeSearchAdapt.h"        
#include "Demo.h"


int main()
{
	srand(time(0));

	Demo demo;
	demo.run(40, 40);


	return 0;
}

