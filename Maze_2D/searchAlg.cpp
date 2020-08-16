//#include "searchAlg.h"
//
//
//
//
//#define MOVE_COST 1

//template<class T>
//std::vector < std::pair<int, int>> AStar<T>::runSearch(T start, T end, Searchable<T>* task)
//{
//	task->removeMarks();
//
//	std::vector<T> posibleMoves;          
//	AStarNode* next = nullptr;
//	T curr;
//	std::vector< std::pair<int, int>> path;
//	AStarNode* root= new AStarNode(start, nullptr, 0,_huristic->Calc(start,end));
//
//	auto nodeCmp = [](AStarNode* left, AStarNode* right) {return (left->getF()) > (right->getF()); };
//	std::priority_queue<AStarNode*, std::vector<AStarNode*>, decltype(nodeCmp)> q(nodeCmp);
//	q.push(root);
//	int counter = 0;
//	while (!q.empty()) {
//		counter++;
//		next = q.top();
//		q.pop();
//		if (next->getPos() == end)
//			break;
//		task->MarkPosition(next->getPos());  
//		root = next;
//		posibleMoves =task->getNextPosibleMoves(root->getPos());    
//		while (!posibleMoves.empty())                      
//		{
//			curr = posibleMoves.back();
//			AStarNode* currNode = new AStarNode(curr, root, root->getG() + MOVE_COST, _huristic->Calc(curr, end));
//			//std::cout << std::endl;
//			//std::cout << root->getPos() <<"  "  <<root->getF()<<" " <<curr<<"  "<< posibleDiraction.size();
//			//std::cout << std::endl;
//			q.push(currNode);
//			posibleMoves.pop_back();
//
//		}
//		//system("cls");
//		//Maze2d* a = dynamic_cast<Maze2d*>(task);
//		//a->printMaze();
//		//system("cls");
//	}
//	//task->removeMarks();
//		
//
//	AStarNode   *toWrite , *toDelite;
//	if (next != nullptr)
//	{
//		path.push_back({ next->getPos().Getrow() ,next->getPos().Getcol() });
//		toWrite = next->getParent();
//		while (toWrite != nullptr)
//		{
//			path.push_back({ toWrite->getPos().Getrow() ,toWrite->getPos().Getcol() });
//			toDelite = toWrite;
//			toWrite = toWrite->getParent();
//			delete toDelite;
//		}
//	}
//	else {
//		path.push_back({ start.Getrow(),start.Getcol() });
//	}
//	amountOfMoves= counter;
//	return path;
//}
//











//template<class T>
//std::vector<std::pair<int, int>> BFSalg::runSearch(T start, T end, Searchable<T>* task)
//{
//	int counter = 0;
//
//	task->removeMarks();
//
//	std::vector<T> posibleMoves;         
//	BfsNode * next = nullptr;
//	T curr;
//	std::vector< std::pair<int, int>> path;
//	BfsNode* root = new BfsNode(start, nullptr, 0);
//
//	std::queue<BfsNode*> q1;
//	q1.push(root);
//	while (!q1.empty()) {
//		counter++;
//		next = q1.front();      
//		q1.pop();
//		if (next->getPos() == end)
//			break;
//		task->MarkPosition(next->getPos());    
//		root = next;
//		posibleMoves = task->getNextPosibleMoves(root->getPos());
//		while (!posibleMoves.empty())                        
//		{
//			curr = posibleMoves.back();
//			BfsNode* currNode = new BfsNode(curr, root, root->getDistance()+MOVE_COST);
//			//std::cout << std::endl;
//			//std::cout << root->getPos() <<"  "  <<root->getF()<<" " <<curr<<"  "<< posibleDiraction.size();
//			//std::cout << std::endl;
//			q1.push(currNode);
//			posibleMoves.pop_back();
//
//		}
//
//	}
//	//task->removeMarks();
//
//
//	BfsNode* toWrite, * toDelete;
//	if (next != nullptr)
//	{
//		path.push_back({ next->getPos().Getrow() ,next->getPos().Getcol() });
//		toWrite = next->getParent();
//		while (toWrite != nullptr)
//		{
//			path.push_back({ toWrite->getPos().Getrow() ,toWrite->getPos().Getcol() });
//			toDelete = toWrite;
//			toWrite = toWrite->getParent();
//			delete toDelete;
//		}
//	}
//	else {
//		path.push_back({ start.Getrow(),start.Getcol() });
//	}
//	amountOfMoves = counter ;
//
//	return path;
//}

