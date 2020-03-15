#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv){
	
	MPI_Init(&argc, &argv);
	int processSize, processRank;
	MPI_Comm_size(MPI_COMM_WORLD, &processSize);
	MPI_Comm_rank(MPI_COMM_WORLD, &processRank);
	if(processRank % 2 == 0){
		cout<<"I am even process "<<processRank<<" of "<<processSize<<endl;
	}
	else{
		cout<<"I am odd process ("<<processRank<<") of "<<processSize<<endl;
	}
	MPI_Finalize();

	return 0;
}
