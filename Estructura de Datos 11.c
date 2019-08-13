#include<stdio.h>
#define A 50
void Carga(char*);
void Proceso(char*,char*);
void Imprimir(char*);

int main()
{
    system("color F0");
    char a[A],a1[A],*cadena,*cadena1;
    cadena=&a[0];
    cadena1=&a1[0];
    Carga(cadena);
    Proceso(cadena,cadena1);
    Imprimir(cadena1);
    getchar();
    getchar();
}

void Carga(char *cadena)
{
    char aux;
    int i;
    printf("\n\t\tArreglo Unidimensional, Tipo Caracter.\n\n");
    printf("\nIngresa la Cadena.\n\n");
    for(i=0;i<A-1&&(aux=getchar())!='\n';++i)
    {
        *(cadena+i)=aux;
    }
    *(cadena+i)='\0';

}

void Proceso(char *cadena, char *cadena1)
{
    int i;
    for(i=0;i<A-1&&*(cadena+i)!='\0';++i)
    {
        *(cadena1+i)=*(cadena+i);
    }
    *(cadena1+i)='\0';
}

void Imprimir(char *cadena1)
{
    int i;
    printf("\n\nLa Cadena Ingresada Fue:\n\n");
    for(i=0;i<A-1&&*(cadena1+i)!='\0';++i)
    {
          putchar(*(cadena1+i));
    }
}
