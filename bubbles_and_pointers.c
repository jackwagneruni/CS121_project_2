#include <stdio.h>
const int MAX=9;

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

void sort(int array[]) {
  int size_of_array = MAX; 
  for(int outer_loop_counter = 0; outer_loop_counter < size_of_array - 1; outer_loop_counter++) {
    for (int inner_loop_counter = 0; inner_loop_counter < size_of_array - outer_loop_counter - 1; inner_loop_counter++) {
      printf("%d ", outer_loop_counter); 
      printf("%d\n", inner_loop_counter); 
    }
  }
}

void swap(int* value1, int* value2) {
  int filler_value = *value1;
  *value1 = *value2;
  *value2 = filler_value;
}

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);
  
  sort(values);
  printf("After: \n");
  printValues(values);
  
  printf("\n");
  return(0);
  
} // end main



