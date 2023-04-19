#include <stdio.h>
#include <stdlib.h>

void printArray(int * array, int size);
int findLargestNum(int * array, int size);
void radixSort(int * array, int size);

int main(){
  
  int size = 12;
  int list[] = {10, 2, 303, 4021, 293, 1, 0, 429, 480, 92, 2999, 14};
  
  printf("Lista desordenada: \n");
  printArray(list, size);
  
  radixSort(list, size);
  
  printf("Lista ordenada: \n");
  printArray(list, size);
  printf("\n");
  
  return 0;
}

void printArray(int * array, int size){
  
  int i;
  printf("[ ");
  for (i = 0; i < size; i++)
    printf("%d ", array[i]);
  printf("]\n");}


int findLargestNum(int * array, int size){
  
  int i;
  int largestNum = -1;
  
  for(i = 0; i < size; i++){
    if(array[i] > largestNum)
      largestNum = array[i];
  }

  return largestNum;
}

// Radix Sort
void radixSort(int * array, int size){
  
  // Base 10
  int i;
  int semiSorted[size];
  int significantDigit = 1;
  int largestNum = findLargestNum(array, size);
  
  // Repetição até encontrar o LSD
  while (largestNum / significantDigit > 0){
    
    printf("Posicao %d\t", significantDigit);
    printArray(array, size);
    
    int bucket[10] = { 0 };
    
    // Pega a quantidade de chaves
    for (i = 0; i < size; i++)
      bucket[(array[i] / significantDigit) % 10]++;
    
    for (i = 1; i < 10; i++)
      bucket[i] += bucket[i - 1];
    
    for (i = size - 1; i >= 0; i--)
      semiSorted[--bucket[(array[i] / significantDigit) % 10]] = array[i];
    
    for (i = 0; i < size; i++)
      array[i] = semiSorted[i];
    
    // Anda com o ponto
    significantDigit *= 10;
    
    printf("\n\tBalde: ");
    printArray(bucket, 10);
  }
}
