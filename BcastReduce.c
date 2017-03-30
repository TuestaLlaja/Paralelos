int main(int argc,int* argv[]){
MPI_Init(&argc,&argv);
MPI_Comm_rank(MPI_COMM_WORLD,&me);
MPI_Comm_size(MPI_COMM_WORLD,&numprocs);
.....
MPI_Bcast(&data,1,MPI_INT,0,MPI_COMM_WORLD);//separa 
....
MPI_reduce(&data,&res,DATA_SIZE,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);//une los procesos
.....
MPI_Finalize();
}
