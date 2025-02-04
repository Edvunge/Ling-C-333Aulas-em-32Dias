### **Exercício: Sistema de Gerenciamento de Biblioteca** 📚  

#### **Objetivo:**  
Criar um sistema que gerencie os livros de uma biblioteca, permitindo ao usuário adicionar, listar, buscar e remover livros do catálogo.  

---

### **🔹 Requisitos do Programa**
1️⃣ O programa deve armazenar os livros em um arquivo chamado **"biblioteca.dat"**.  
2️⃣ Cada livro deve conter:
   - **Título**  
   - **Autor**  
   - **Ano de Publicação**  
   - **Número de Páginas**  
3️⃣ O usuário pode escolher entre as seguintes opções:
   - **Adicionar um novo livro**  
   - **Listar todos os livros cadastrados**  
   - **Buscar um livro pelo título**  
   - **Remover um livro do catálogo**  
   - **Sair do programa**  

---

### **🔹 Funcionalidades que você deve implementar**
1️⃣ **Criar e manipular uma `struct` para armazenar os dados do livro**.  
2️⃣ **Usar um arquivo (`fopen`, `fwrite`, `fread`, `fclose`) para armazenar e recuperar os livros**.  
3️⃣ **Implementar um menu interativo para o usuário**.  
4️⃣ **Usar loops (`while`, `for`) e condicionais (`if`, `switch`) para controlar a execução**.  
5️⃣ **Utilizar entrada segura de dados (`fgets`) para evitar erros na leitura de strings**.  
6️⃣ **Utilizar funções para modularizar o código e facilitar a manutenção**.  

---

### **🔹 Estrutura do Programa (Sugestão)**
1️⃣ Criar uma **struct** chamada `Livro`.  
2️⃣ Criar um **arquivo binário** (`biblioteca.dat`) para armazenar os livros.  
3️⃣ Criar um **menu interativo** para permitir ao usuário escolher as ações.  
4️⃣ Criar funções para cada funcionalidade:  
   - `void adicionarLivro();`  
   - `void listarLivros();`  
   - `void buscarLivro();`  
   - `void removerLivro();`  
5️⃣ Usar **um loop `do-while`** para manter o programa rodando até o usuário escolher sair.  

---

### **🔹 Exemplo de Entrada e Saída Esperada**
```
=== BIBLIOTECA DIGITAL ===
1. Adicionar Livro
2. Listar Livros
3. Buscar Livro pelo Título
4. Remover Livro
5. Sair
Escolha uma opção: 1

Digite o título do livro: O Pequeno Príncipe
Digite o nome do autor: Antoine de Saint-Exupéry
Digite o ano de publicação: 1943
Digite o número de páginas: 96
Livro adicionado com sucesso!

=== BIBLIOTECA DIGITAL ===
1. Adicionar Livro
2. Listar Livros
3. Buscar Livro pelo Título
4. Remover Livro
5. Sair
Escolha uma opção: 2

Lista de Livros:
Título: O Pequeno Príncipe | Autor: Antoine de Saint-Exupéry | Ano: 1943 | Páginas: 96

```

---

### **🔹 Regras e Desafios Extras**
1️⃣ **Evite duplicatas:** não permita que dois livros com o mesmo título sejam adicionados.  
2️⃣ **Ordenação:** exiba os livros ordenados por ano de publicação.  
3️⃣ **Atualização:** adicione uma opção para **editar um livro existente**.  
4️⃣ **Banco de dados:** substitua o uso de arquivos por um banco de dados SQLite.  

---

Esse exercício vai te ajudar a melhorar:
✅ Manipulação de **arquivos em C**  
✅ Uso de **structs** para representar dados  
✅ **Entrada e saída de dados**  
✅ **Manipulação de strings** e uso de `fgets()`  
✅ Organização do código com **funções e modularização**  
