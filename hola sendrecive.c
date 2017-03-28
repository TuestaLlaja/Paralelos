  GNU nano 2.2.6                                 Archivo: hola.c                                                                            

#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[])
{
  int rank, size, number;

  MPI_Init(&argc, &argv);

  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
if(rank == 0){
        number = -1;
        MPI_Send(&number,1,MPI_INT,1,0,MPI_COMM_WORLD);
}
else if(rank == 1){
        MPI_Recv(&number,1,MPI_INT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
}


  printf("Hola! Soy el %d de %d\n", rank, size);

  MPI_Finalize();

  return 0;
}




