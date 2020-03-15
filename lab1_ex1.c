#include <stdio.h>
#include <mpi.h>

int main(int argc, char **argv){
	MPI_Init(&argc,&argv);
	int processRank, processSize;
	MPI_Comm_rank(MPI_COMM_WORLD, &processRank);
	MPI_Comm_size(MPI_COMM_WORLD, &processSize);
	printf("Hello world from %d of %d\n",processRank, processSize);
	MPI_Finalize();
	return 0;
}
