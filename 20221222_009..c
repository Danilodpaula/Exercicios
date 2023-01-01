#include <stdio.h>

int main() 
{
  int n, m;         
  int x, y;         
  int valor;        
  int xmax, ymax;   
  int valormax;     

  printf("Maximizo x*y - x*x + y, onde 0 <= x <= n e 0 <= y <= m.\n");


  printf("Entre com n e m: ");
  scanf ("%d %d", &n, &m);

  xmax = ymax = 0;
  valormax = 0;  

  for (x = 0; x <= n; x++) 
    {
      for (y = 0; y <= m; y++) 
	{
          valor = x*y - x*x + y;
          if (valor > valormax)
	    {
              valormax = valor;
              xmax = x;
              ymax = y;
	    }
	}  
    }
  
  printf("Valor maximo da funcao = %d foi alcancado com x = %d e y = %d\n", 
          valormax, xmax, ymax);
    
  return 0;
} 
