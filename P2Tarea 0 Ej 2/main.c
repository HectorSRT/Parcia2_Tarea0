#include <stdio.h>
#include <stdlib.h>

void cambia_vocales(char cadena[]);

int main()
{
    char cadena[100];
    scanf("%[^\n]", cadena);
    cambia_vocales(cadena);
    printf("%s", cadena);
    return 0;
}

void cambia_vocales(char cadena[]){
    int i=0;
    while(cadena[i]!='\0'){
        if(cadena[i]=='A'){
            cadena[i]='a';
        }else if(cadena[i]=='E'){
            cadena[i]='e';
        }else if(cadena[i]=='I'){
            cadena[i]='i';
        }else if(cadena[i]=='O'){
            cadena[i]='o';
        }else if(cadena[i]=='U'){
            cadena[i]='u';
        }else if(cadena[i]=='a'){
            cadena[i]='A';
        }else if(cadena[i]=='e'){
            cadena[i]='E';
        }else if(cadena[i]=='i'){
            cadena[i]='I';
        }else if(cadena[i]=='o'){
            cadena[i]='O';
        }else if(cadena[i]=='u'){
            cadena[i]='U';
        }
        i++;
    }
}
