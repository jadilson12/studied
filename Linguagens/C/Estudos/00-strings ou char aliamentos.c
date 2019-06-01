#include <stdio.h>

void main(){
    printf("\nIsso é uma quebra de linha (line feed ou LF)\n");
    printf("\tTabulação horizontal x e não y \n");
    printf("\bRetrocede o cursor em um caractere (backspace)\n");
    printf("\t\tTabulação horizontal x e y \n");


}

/*
\r	Retorno de carro (carriage return ou CR): volta o cursor para o começo da linha sem mudar de linha
\a	Emite um sinal sonoro
\f	Alimentação de formulário (form feed ou FF)
\v	Tabulação vertical (em impressoras)
\"	Aspa dupla
\'	Aspa simples
\\	Barra invertida
\0	Caractere nulo (caractere de valor zero, usado como terminador de strings)
\N	O caractere cuja representação octal é N (dígitos de 0 a 7)
\xN	O caractere cuja representação hexadecimal é N (dígitos de 0 a 9 e de A a F)

 Hexadecimal   Octal   Caracter
    \x00       \00        \0
    \x0A       \12        \n
    \x0D       \15        \r
    \x07       \07        \a
    \x08       \10        \b
    \x0B       \13        \v

    int a;
    scanf ("%d", &a);

    int a;
    char b;
    float c;
    scanf ("%d %c %f", &a,&b,&c);
 */
