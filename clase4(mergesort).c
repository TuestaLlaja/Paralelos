///secuencial
void merge_sort(int iArray[], int startIndex, int endIndex){
  int midIndex;
 //check for base case
 if(startIndex >= endIndex) / 2{
  return;
  }
//first, divide is half
midIndex = (startIndex + endIndex);

//first recursive call
merge_sort(iArray, startIndex, midIndex);

//second recursive call
merge_sort(iArray, midIndex, endIndex);

//the merge funcion
merge(iArray,startIndex, endIndex);
}
