
# Super Trunfo de Cidades

Este é um jogo desenvolvido em linguagem C que permite cadastrar informações de duas cidades e comparar suas cartas com base em diferentes atributos, como população, área, PIB, número de pontos turísticos, densidade demográfica e PIB per Capita.

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
   gcc main.c -o supertrunfo
   ```
4. Execute o programa:
   ```bash
   ./supertrunfo
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
   gcc main.c -o supertrunfo.exe
   ```
4. Execute o programa:
   ```
   supertrunfo.exe
   ```

#### Usando Compilador do Visual Studio

1. Abra o Prompt de Comando do Desenvolvedor Visual Studio.
2. Navegue até o diretório:
   ```
   cd caminho\para\diretorio
   ```
3. Compile o programa:
   ```
   cl main.c
   ```
4. Execute o programa:
   ```
   main.exe
   ```

## Utilização do Programa

- Após executar o programa, siga as instruções para cadastrar duas cidades.
- Em seguida, escolha no menu interativo o atributo que deseja comparar (População, Área, PIB, Número de pontos turísticos, Densidade demográfica ou PIB per Capita).

## Observações

- Caso caracteres especiais não sejam exibidos corretamente, ajuste seu terminal para UTF-8.
- Este projeto tem propósito didático.

---

Desenvolvido como parte do desafio de implementação da lógica do jogo Super Trunfo em linguagem C.
