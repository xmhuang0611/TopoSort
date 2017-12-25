#include "stdafx.h"
#include <iostream>
#include "TopoSort.h"
using namespace std;

int main()
{
	TopoSort topo;
	topo.getFileInfor();
	if (!topo.sort())
	{
		cout << "´æÔÚ»·" << endl;
	}
	topo.disperseCourseToSemeter();
	topo.showConPanel();
	system("pause");
	return 0;
}