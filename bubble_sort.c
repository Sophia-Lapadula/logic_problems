//Resolvendo o problema por bubble sort
#include <stdio.h>
  // função swap para trocar o valor do elementos de lugar
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

// função para imprimir o array
void print_array(int array[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
} 
// Algoritmo de Bubble sort
void bubble_sort(int arr[], int n)
{
   int i, j, counter=0;
   for (i = 0; i < n; i++)      

       for (j = 0; j < n-1; j++) 
           if (arr[j] > arr[j+1]){
              swap(&arr[j], &arr[j+1]);
              counter++;
           }
    print_array(arr, n);
}
  
// função main para testar o programa com input inserido pelo usuário
int main()
{
    int i,num;
    scanf("%d",&num);
    int arranjo[num];
    for(i=0;i<num;i++){
        scanf("%d",&arranjo[i]);
        
    }
    bubble_sort(arranjo, num);
    return 0;
}

