#include <stdio.h>
int main(){
    int idade;
    printf("Digite a idade:\n");
    scanf("%i", &idade);
    if (idade % 2 == 0){
        printf("Idade Par");
    }
return 0;
}
