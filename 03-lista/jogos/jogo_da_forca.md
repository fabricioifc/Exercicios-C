# Jogo de Adivinhação

Bem-vindo ao "Jogo de Adivinhação". Neste jogo, você terá a oportunidade de testar sua habilidade em adivinhar um número secreto entre 1 e 100. Sua tarefa é adivinhar o número correto com o menor número de tentativas possível.

**Instruções:**

 - O computador selecionará aleatoriamente um número entre 1 e 100 e o manterá em segredo.
 - Sua missão é adivinhar o número secreto.
 - Você pode fazer quantas tentativas forem necessárias para acertar o número.
 - Após cada tentativa, o computador lhe dará uma dica se o número secreto é maior ou menor do que o seu palpite.
 - O jogo continuará até você adivinhar o número correto.
 - Quando você adivinhar corretamente, o jogo exibirá o número secreto e informará quantas tentativas você levou para acertar.
 - Você pode optar por jogar novamente se desejar.

**Passo 1: Configuração Inicial**

Comece criando um novo projeto em C no seu ambiente de desenvolvimento preferido (por exemplo, Code::Blocks, Dev-C++, Visual Studio Code com extensão C/C++, etc.).

**Passo 2: Inclua as Bibliotecas Necessárias**

```c
#include <stdio.h>
#include <string.h>
```

Essas bibliotecas serão necessárias para entrada/saída e manipulação de strings.

**Passo 3: Declare as Variáveis Iniciais**

```c
int main() {
    char palavra[20]; // Palavra a ser adivinhada
    char palpite;     // Letra inserida pelo jogador
    int tentativas = 6; // Número máximo de tentativas
```

Aqui, estamos declarando algumas variáveis iniciais, incluindo a palavra a ser adivinhada, a letra inserida pelo jogador e o número máximo de tentativas.

**Passo 4: Escolha uma Palavra para Adivinhar**

```c
    // Escolha uma palavra para adivinhar (você pode adicionar mais palavras)
    strcpy(palavra, "computador");
```

Você pode escolher ou gerar aleatoriamente uma palavra para que o jogador adivinhe. Adicione mais palavras conforme necessário.

**Passo 5: Inicialize Variáveis Adicionais**

```c
    int acertos = 0; // Número de letras adivinhadas corretamente
    int tamanho = strlen(palavra); // Tamanho da palavra
    int enforcado = 0; // Se o jogador foi enforcado

    char letrasUsadas[26]; // Para armazenar letras já usadas
    int numLetrasUsadas = 0; // Número de letras já usadas
```

Essas variáveis serão usadas para acompanhar o progresso do jogador, o tamanho da palavra, se o jogador está enforcado e as letras já usadas.

**Passo 6: Inicie o Loop do Jogo**

```c
    printf("Bem-vindo ao Jogo da Forca!\n");

    // Loop do jogo. Continua até que o jogador adivinhe a palavra ou seja enforcado
    while (acertos < tamanho && !enforcado) {
```

O jogo continuará até que o jogador adivinhe a palavra ou seja enforcado.

**Passo 7: Exiba o Estado Atual do Jogo**

```c
        printf("\nPalavra: ");
        for (int i = 0; i < tamanho; i++) {
            if (palavra[i] == ' ') {
                printf(" ");
            } else if (strchr(letrasUsadas, palavra[i]) != NULL) {
                printf("%c", palavra[i]);
            } else {
                printf("_");
            }
        }
```

Esta parte do código mostra a palavra parcialmente revelada, com letras adivinhadas preenchidas e letras não adivinhadas representadas por "_".

**Passo 8: Exiba as Letras Usadas**

```c
        printf("\nLetras usadas: ");
        for (int i = 0; i < numLetrasUsadas; i++) {
            printf("%c ", letrasUsadas[i]);
        }
```

Isso exibe as letras que o jogador já usou para evitar palpites repetidos.

**Passo 9: Solicite um Palpite ao Jogador**

```c
        printf("\nTentativas restantes: %d\n", tentativas);

        printf("Digite uma letra: ");
        scanf(" %c", &palpite);
```

Peça ao jogador para inserir uma letra como palpite.

**Passo 10: Avalie o Palpite do Jogador**

```c
        letrasUsadas[numLetrasUsadas] = palpite;
        numLetrasUsadas++;

        int letraEncontrada = 0;
        for (int i = 0; i < tamanho; i++) {
            if (palavra[i] == palpite) {
                acertos++;
                letraEncontrada = 1;
            }
        }

        if (!letraEncontrada) {
            tentativas--;
        }

        if (tentativas == 0) {
            enforcado = 1;
        }
    }
```

Registre o palpite do jogador, verifique se a letra está na palavra e atualize as variáveis de progresso do jogador.

**Passo 11: Finalize o Jogo e Mostre o Resultado**

```c
    if (acertos == tamanho) {
        printf("\nParabéns! Você venceu. A palavra era: %s\n", palavra);
    } else {
        printf("\nVocê foi enforcado! A palavra correta era: %s\n", palavra);
    }

    return 0;
}
```

Neste passo, você verifica se o jogador venceu ou foi enforcado e mostra a mensagem apropriada.

**Passo 12: Execute o Jogo**

Compile e execute o seu programa. O jogo da Forca será iniciado, e o jogador poderá tentar adivinhar a palavra oculta.

**Passo 13: Personalize e Expanda o Jogo**

Você pode personalizar o jogo adicionando mais palavras, melhorando a interface do usuário ou adicionando funcionalidades extras, como uma lista de palavras aleatórias ou uma interface gráfica.