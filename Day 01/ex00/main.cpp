#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony	*heap = new Pony("HeapedMilf");
	heap->do_some_stuff();
	delete heap;
}

void ponyOnTheStack(void)
{
	Pony	stack = Pony("StackedDude");
	stack.do_some_stuff();
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	std::cout << "All pony were dead :(" << std::endl;
	return (0);
}
