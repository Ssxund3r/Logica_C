#include <stdio.h>
#include <string.h>

 main ()
 {
   int idade;
   double salario;
   char nome[50];
   char sexo;

   idade = 24;
   salario = 4560.9;
   strcpy(nome, "Gabriel Costa");
   sexo  = 'M';

   printf ("O funcionario %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade);

   return 0;
 }
