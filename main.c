#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define pontos 1000

int main (){


        int JogarNovamente = 1;


        while (JogarNovamente) {

            int segundos = time(0);
            srand(segundos);
            int NumeroAleatorio = rand();

            int NumeroSecreto = NumeroAleatorio % 100;

            int JogadorErrou, nivel, TotalTentativas;
            int chute, i, acertou, continuar, UltimoNumero;
            double RetirarPontos, pontosFinal;

            JogadorErrou = 1;
            RetirarPontos = 0;
            nivel = 0;
            TotalTentativas = 0;
            pontosFinal = 0;



            printf("\n");
            printf("                  ________                   \n");
            printf("            _jgN########Ngg_                 \n");
            printf("          _N##N@@""      ""9NN##Np_          \n");
            printf("         d###P            N####p             \n");
            printf("          ""                 T####           \n");
            printf("                           d###P             \n");
            printf("                        _g###@F              \n");
            printf("                     _gN##@P                 \n");
            printf("                   gN###F                    \n");
            printf("                  d###F                      \n");
            printf("                 0###F                       \n");
            printf("                 0###F                       \n");
            printf("                 0###F                       \n");
            printf("                  NN@                        \n");


            printf("                  ___                        \n");
            printf("                 q###r                       \n");
            printf("                  ""                         \n");

            printf("        _  ___   ____  ___    ____  _____                              \n");
            printf("       | |/ _ \\ / ___|/ _ \\  |  _ \\| ____|                          \n");
            printf("    _  | | | | | |  _| | | | | | | |  _|                               \n");
            printf("   | |_| | |_| | |_| | |_| | | |_| | |___                              \n");
            printf("    \\___/ \\___/_\\____|\\____/_|____/|_____| _    _    ____          \n");
            printf("      / \\  |  _ \\_ _\\ \\   / /_ _| \\ | | | | |  / \\  |  _ \\      \n");
            printf("     / _ \\ | | | | | \\ \\ / / | ||  \\| | |_| | / _ \\ | |_) |       \n");
            printf("    / ___ \\| |_| | |  \\ V /  | || |\\  |  _  |/ ___ \\|  _  <        \n");
            printf("   /_/   \\_\\____/___|  \\_/  |___|_| \\_|_| |_/_/   \\_\\_| \\_\\    \n");

            printf("\n");

            printf("      Digite um numero para acessar o MENU: ");
            scanf("%d", &continuar);

            printf("\n");
            printf("\n");

            printf("                   MENU: \n");
            printf("\n");
            printf("                [1] = FACIL\n");
            printf("                [2] = MEDIO\n");
            printf("                [3] = DIFICIL\n");
            printf("\n");
            printf("         Escolha o nivel de dificuldade: ");
            scanf("%d", &nivel);

            printf("\n");
            printf("\n");
            printf("       **********************************\n");

            //printf("%d\n", NumeroSecreto);


            switch (nivel){

            case 1:
                TotalTentativas = 20;
                printf("       * Nivel FACIL selecionado *\n");
                printf("         Total de tentativas = %d\n", TotalTentativas);
                break;

            case 2:
                TotalTentativas = 15;
                printf("       * Nivel MEDIO selecionado *\n");
                printf("         Total de tentativas = %d\n", TotalTentativas);
                break;

            default:
                TotalTentativas = 6;
                printf("       * Nivel DIFICIL selecionado *\n");
                printf("         Total de tentativas = %d\n", TotalTentativas);
                break;

            }


            printf("\n");
            printf("\n");
            printf("       **********************************\n");
            printf("\n");
            printf("\n");


            for (i = 1; i <= TotalTentativas; i++){

                printf("          TENTATIVA NUMERO: %d\n", i);
                printf("          Qual o seu chute? ");
                scanf("%d", &chute);

                printf("\n");
                printf("\n");


                if (chute < 0){

                    printf("       *** Numero INVALIDO! *** \n");
                    printf("       ***************************\n");
                    printf("\n");

                    i--;
                    continue;

                }

                if(chute == UltimoNumero){

                    printf("     *** Numero da ULTIMA RODADA! *** \n");
                    printf("       ***************************\n");
                    printf("\n");

                    i--;
                    continue;

                }

                acertou = chute == NumeroSecreto;
                if (acertou){
                    break;


                } else {

                    printf("          OPS, NAO FOI DESSA VEZ :( \n");
                    RetirarPontos = RetirarPontos + (abs(NumeroSecreto - chute)/(double)2);


                    if(chute > NumeroSecreto){
                        printf("       ** DICA: seu chute foi MAIOR! ** \n");


                    } else {
                        printf("       ** DICA: seu chute foi MENOR! **\n");

                    }
                }

                printf("\n");
                printf("       ***************************\n");

                UltimoNumero = chute;

            }

            pontosFinal = pontos - RetirarPontos;

            if(acertou){

               printf("                      .''.      .        *''*    :_\/_:     .   \n");
               printf("        :_\/_:   _\(/_  .:.*_\/_*   : /\ :  .'.:.'.             \n");
               printf("    .''.: /\ :   ./)\   ':'* /\ * :  '..'.  -=:o:=-             \n");
               printf("   :_\/_:'.:::.    ' *''*    * '.\'/.' _\(/_'.':'.'             \n");
               printf("   : /\ : :::::     *_\/_*     -= o =-  /)\    '  *             \n");
               printf("    '..'  ':::'     * /\ *     .'/.\'.   '                      \n");
               printf("        *            *..*         :                             \n");
               printf("          *                                                     \n");
               printf("          *                                                     \n");
               printf("           PARABENS! VOCE ACERTOU :) \n");

               printf("\n");
               printf("       ***************************\n");
               printf("\n");
               printf("          Obrigada por jogar!\n");
               printf("          Sua pontuacao =  %.2lf\n", pontosFinal);
               printf("\n");
               printf("       ***************************\n");
               printf("\n");


            } else {

                printf("                       (())) \n");
                printf("                      /|x x| \n");
                printf("                     /\\( - ) \n");
                printf("             ___.-._/\\/      \n");
                printf("            /=`_'-'-'/  !!   \n");
                printf("            |-{-_-_-}     !  \n");
                printf("            (-{-_-_-}    !   \n");
                printf("             \\{_-_-_}   !    \n");
                printf("              }-_-_-}        \n");
                printf("              {-_|-_}        \n");
                printf("              {-_|_-}        \n");
                printf("              {_-|-_}        \n");
                printf("              {_-|-_}        \n");
                printf("          ____%%@ @%%_______ \n");

                printf("             GAME OVER! \n");
                printf("          tente novamente!\n");
                printf("       ***************************\n");
                printf("\n");
            }

            printf("     Deseja jogar novamente? 1 - SIM      0- NAO: ");
            scanf("%d", &JogarNovamente);

            printf("\n");

            if(JogarNovamente != 1){
                JogarNovamente = 0;
            }
        }


return 0;
}
