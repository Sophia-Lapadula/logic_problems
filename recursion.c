#include <stdio.h>

int total_livros(int C,int V){
    int total = 0;
    if(V>C){
        return 0;
    }else{
        int a=C%V;
        int b = (C-a)/V;
        //C = C + b;
        total= b + total_livros(b+a,V);
        return (total);
    }
}

int main() {
   int d, p, v, i,quant;
   scanf("%d",&quant);
   int answers[quant];
   for(i=0;i<quant;i++){
       scanf("%d %d %d",&d,&p,&v);
       int comprados=d/p;
       answers[i]= comprados + total_livros(comprados,v);
   }
   for(i=0;i<quant;i++){
       printf("%d\n",answers[i]);
   }
   return 0;
}