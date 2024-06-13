#include <iostream>
#include"mpi.h"
using namespace std;
int main()
{
	MPI_Init(NULL, NULL);
	int rank;
	int size;
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	char p_n[MPI_MAX_PROCESSOR_NAME];
	int l;
	MPI_Get_processor_name(p_n, &l);
	printf("hELLO %s my rank is %d my size is %d :", p_n, rank ,size);
	MPI_Finalize();
}
