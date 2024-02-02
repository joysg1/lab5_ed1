#include<stdio.h>
#include<windows.h>
#include<stdlib.h>







void main(){
    int x=0;
    int i=0;
    int c=0;
    int d=0;
    char busq[40];
    int notnv=0;
    int prom=0;
    int prom2=0;
    int mayor=0;
    char nomy[40];


    struct total{
    char nom[40];
    int not;




    };
    struct total estud[10];

    printf("\n\t\t\t\tINGRESO DE DATOS \n");

    for(i=0; i<10; i++){
        printf("\nDatos del estudiante %d: \n",i+1);
        printf("\nNombre: ");
        scanf("%s",&estud[i].nom);
        printf("\nNota: ");
        scanf("%d",&estud[i].not);








    }



   do{
   printf("\n\t\t\tInforme de los estudiantes\n\n");
   printf("\nSeleccione la opcion ha realizar: \n\n");
   printf("1. Buscar un estudiante. \n");
   printf("2. Buscar un estudiante y modificar su nota. \n");
   printf("3. Calcular el promedio de notas.\n");
   printf("4. Calcular el promedio de notas menores que 90.\n");
   printf("5. Mostrar el alumno con mejor calificacion. \n");
   printf("6. Salir. \n");
   scanf("%d",&x);

   switch(x){
   case 1:
       printf("\nIngrese el nombre del estudiante: ");
       scanf("%s",&busq);

       for (i=0; i<10; i++){

           estud[i].not;
           if(strcmp(busq,estud[i].nom)==0){
                printf("\nEstudiante encontrado.");
                printf("\nNombre: %s",estud[i].nom);
                printf("\nNota: %d",estud[i].not);
                printf("\n");
           }
            else if(strcmp(busq,estud[i].nom)==1){
            c=1;
            }
















}

   if(c==1){
   printf("\nEstudiante no encontrado.");
   printf("\n");
}



       break;


   case 2:
       printf("\nCambio de nota");
       printf("\nIngrese el nombre del estudiante: ");
       scanf("%s",&busq);
       for (i=0; i<10; i++){

           estud[i].not;
           if(strcmp(busq,estud[i].nom)==0){
                printf("\nEstudiante encontrado.");
                printf("\nNombre: %s",estud[i].nom);
                printf("\nNota: %d",estud[i].not);
                printf("\n");
                printf("\nIngrese la nueva nota del estudiante %s: ",estud[i].nom);
                scanf("%d",&notnv);
                estud[i].not=notnv;
                printf("\nDATOS ACTUALIZADOS DEL ESTUDIANTE");
                printf("\nNombre: %s",estud[i].nom);
                printf("\nNota: %d",estud[i].not);
           }
            else if(strcmp(busq,estud[i].nom)==1){
            c=1;
            }
















}

   if(c==1){
   printf("\nEstudiante no encontrado.");
   printf("\n");
}


















    break;

   case 3:
       printf("\nPromedio de las notas");
       for(i=0; i<10; i++){
           estud[i].not;
           prom=prom+estud[i].not;


            }
       prom2=prom/10;
       printf("El promedio de las notas es: %d",prom2);
       printf("\n");
    break;


   case 4:
       prom=0;
       prom2=0;
       printf("\nPromedio de las notas menores de 90");
       for(i=0; i<10; i++){

           estud[i].not;
           if(estud[i].not<90){
           prom=prom+estud[i].not;
           d=d+1;
           }

            }
       prom2=prom/d;
       printf("\nEl promedio de las notas menores de 90 es: %d",prom2);
       printf("\n");











    break;

   case 5:
       printf("\nAlumno con mejor nota");
       for(i=0; i<10; i++){
           estud[i].nom;
            if(estud[i].not>mayor){

            mayor=estud[i].not;
            printf("\nEl estudiante %s ha obtenido la mayor nota %d",estud[i].nom,mayor);




            }


            }
            printf("\n");
       break;


       case 6:
           printf("\nGracias por utilizar el programa");
           printf("\n");
           break;

   default:
    printf("\n\nOpcion fuera del rango \n\n");







   }

   }while(x!=6);























}
