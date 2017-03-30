int main(int argc,int* argv[]){
MPI_Init(&argc,&argv);
MPI_Comm_rank(MPI_COMM_WORLD,&me);//me es indicador en que proceso esta
MPI_Comm_size(MPI_COMM_WORLD,&numprocs);//el programa solo encia un valor a cada proceso, cada proceso tiene es e valo y res suma los valor es de cada proceso
.....
 
double data = 1;//cuando se defione denro de init mpi ese valor se define en todos los procesos
MPI_Bcast(&data,1,MPI_INT,0,MPI_COMM_WORLD);//separa , 0 es desde donde en vias la informacion 
....
 data = 1;//cuando se defione denro de init mpi ese valor se define en todos los procesos
 //MPI_barrier -> hacxe que el proceso anterior termine, es un abarrera, garantiza un sincronismo
MPI_reduce(&data,&res,DATA_SIZE,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);//une los procesos res es donde se guada el resultado
.....//DATA_SIZE-> int -> es el numero de procesos, tamaño de datos
  //MPI_SUM ->tipo de operacion
  //0-> desde el proceso que esta
  //MPI_COMM_WORLD -> para paritcionar los procesos
MPI_Finalize();
}


MPI_Scatter//para vectores, separa la infomacion de cada vector en cada proceso
MPI_Gather
