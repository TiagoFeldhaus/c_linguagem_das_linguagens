int main () {
    printf("******************************************************\n");
    printf("*                      Bem Vindo                     *\n");
    printf("******************************************************\n");

    int numeroescondido = 7325642;

    int chute;

    printf("Qual o seu chute?");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", &chute)

    int acertou = (chute == numeroescondido);

    if(acertou){
    printf("Acertou!\n");
    printf("Jogue de novo!\n")
    }
    else {

        if(chute > numeroescondido){
            printf("O número é menor\n")
        }
        if(chute < numeroescondido){
            printf("O número é maior\n")
        }
    }
}