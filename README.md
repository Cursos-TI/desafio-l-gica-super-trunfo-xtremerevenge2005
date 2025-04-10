
# Super Trunfo de Cidades

Este é um jogo desenvolvido em linguagem C que permite cadastrar informações de duas cidades e comparar suas cartas com base dois atributos numéricos diferentes por rodada, como população, área, PIB, número de pontos turísticos, densidade demográfica e PIB per Capita.

O programa avalia qual cidade vence para cada atributo escolhido, considerando que a que tiver o maior valor vence, exceto para a densidade demográfica, cujo menor valor é o vencedor. 

Ao final, o programa também informa a cidade vencedora, considerada a que tiver o maior valor no somatório dos dois atributos escolhidos, considerando que a densidade demográfica será substituída pelo seu inverso matemático (1/densidade) no cálculo.

## Pré-requisitos

- **Compilador C:** É necessário ter o GCC (GNU Compiler Collection) ou outro compilador de C instalado no seu sistema.
- **Terminal ou Prompt de Comando:** Necessário para compilar e executar o código.
- **Codificação UTF-8:** Certifique-se de que seu terminal esteja configurado para exibir corretamente caracteres especiais.

## Instruções para Compilação e Execução

### Unix, Linux e macOS

1. Abra o terminal.
2. Navegue até o diretório onde está o arquivo `logicaSuperTrunfo.c`:
   ```bash
   cd caminho/para/diretorio
   ```
3. Compile o código:
   ```bash
   gcc logicaSuperTrunfo.c -o logicaSuperTrunfo
   ```
4. Execute o programa:
   ```bash
   ./logicaSuperTrunfo
   ```

### Windows

#### Usando MinGW (recomendado)

1. Abra o Prompt de Comando.
2. Navegue até o diretório onde está o arquivo `logicaSuperTrunfo.c`:
   ```
   cd caminho\para\diretorio
   ```
3. Compile o código:
   ```
   gcc logicaSuperTrunfo.c -o logicaSuperTrunfo.exe
   ```
4. Execute o programa:
   ```
   logicaSuperTrunfo.exe
   ```

#### Usando Compilador do Visual Studio

1. Abra o Prompt de Comando do Desenvolvedor Visual Studio.
2. Navegue até o diretório:
   ```
   cd caminho\para\diretorio
   ```
3. Compile o programa:
   ```
   cl logicaSuperTrunfo.c
   ```
4. Execute o programa:
   ```
   logicaSuperTrunfo.exe
   ```

## Utilização do Programa

- Após executar o programa, siga as instruções para cadastrar duas cidades.
- Em seguida, escolha no menu interativo os dois atributos que deseja comparar (População, Área, PIB, Número de pontos turísticos, Densidade demográfica ou PIB per Capita).
- Os resultados serão mostrados na sequência. 
- Certifique-se de submeter dados válidos para o programa, embora tenha sido implementado o tratamento de erros provenientes do usuário no algoritmo.

## Observações

- Caso caracteres especiais não sejam exibidos corretamente, ajuste seu terminal para UTF-8. O comando `chcp 65001` no terminal do Windows ativa esses caracteres temporariamente.
- Este projeto tem propósito didático.

---

Desenvolvido como parte do desafio de implementação da lógica do jogo Super Trunfo em linguagem C.
