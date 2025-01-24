#include <stdio.h>

void printValues(int*);
void sort(int*);
void swap(int*, int*);



void printValues (int values[]) {
        printf("[");
        for (int i = 0; i < 9; i++){
                printf("%d", values[i]);
                printf(" ");
        }
        printf("]");
}

void sort(int mixed_array[]) {
  

}

void swap(int* value1, int* value2) {



}

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);
/*
  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);
  sort(values);
  printf("After: \n");
  printValues(values);
  */
  printf("\n");
  return(0);
  
} // end main
