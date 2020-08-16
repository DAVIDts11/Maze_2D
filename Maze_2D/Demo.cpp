#include "Demo.h"

#include <iomanip>

void Demo::print_res(std::vector<Pos2d> res)const
{
	//cout << fixed << setprecision(6) << setfill(' ');

	for (unsigned int i = 0; i < res.size(); i++)
	{
		
		std::cout  <<"("<<res[i]<<")";
		if(i%12==0)
			std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Demo::run(int rows, int columns)const
{
	srand(time(0));
	Maze2d m1;
	MyMaze2dGenerator maze;
	m1 = maze.generate(rows, columns);

	//
	MazeSearch2dAdapt * mazeToSearch = new MazeSearch2dAdapt(m1);
	mazeToSearch->removeMarks();                               // ch2
	mazeToSearch->printMaze();                                 // ch2
	Manheten2dUristic* mh = new Manheten2dUristic;
	AirLine2dHuristic* alh = new AirLine2dHuristic;
	AStar<Pos2d> a1(mh);
	AStar<Pos2d> a2(alh);
	BFSalg<Pos2d> b1;
	std::vector<Pos2d> res3 = b1.runSearch(m1.getEnter(), m1.getExit(), mazeToSearch);
	print_res(res3);
	mazeToSearch->printMaze();
	std::cout << std::endl;
	std::vector<Pos2d> res1 = a1.runSearch(m1.getEnter(), m1.getExit(), mazeToSearch);
	print_res(res1);
	mazeToSearch->printMaze();
	std::cout << std::endl;

	std::vector<Pos2d> res2 = a2.runSearch(m1.getEnter(), m1.getExit(), mazeToSearch);
	                                                          // ch2
	print_res(res2);
	mazeToSearch->printMaze();
	std::cout << std::endl;
	std::cout << std::endl;





	std::cout << "TOTAL AMOUNT OF MOVES : " << std::endl;
	std::cout << "result BFS -               "<< res3.size()<< "      search moves -   " << b1.getAmountOfMoves() << std::endl;
	std::cout << "result  Astar(Manhattan) - "<< res1.size()<< "      search moves -   " << a1.getAmountOfMoves() << std::endl;
	std::cout << "result  Astar(airLine) -   "<< res2.size()<< "      search moves -   " << a2.getAmountOfMoves() << std::endl;

	//SimpleMaze2dGenerator rand_maze;
	//rand_maze.generate(30, 30);

	//maze.generate(30, 30);
}






 


