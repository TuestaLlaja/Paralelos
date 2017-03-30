int main(int argc,int* argv[]){
MPI_Init(&argc,&argv);
MPI_Comm_rank(MPI_COMM_WORLD,&me);
MPI_Comm_size(MPI_COMM_WORLD,&numprocs);//el programa solo encia un valor a cada proceso, cada proceso tiene es e valo y res suma los valor es de cada proceso
.....
MPI_Bcast(&data,1,MPI_INT,0,MPI_COMM_WORLD);//separa , 0 es desde donde en vias la informacion 
....
MPI_reduce(&data,&res,DATA_SIZE,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);//une los procesos res es donde se guada el resultado
.....//DATA_SIZE-> int -> es el numero de procesos, tamaño de datos
  //MPI_SUM ->tipo de operacion
  //0-> desde el proceso que esta
MPI_Finalize();
}
