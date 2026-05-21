# Passos para instalar e configurar C na IDE Vs code ou antigravity

## Configurando o Vs code/Antigravity

1. Pra começar va em extensões e procure por as seguintes extensões

    - C/C++ Compile Run

    - C/C++ DevTools

    - C/C++

    - C/C++ Extension Pack

2. Agora caso queira que o programa seja exibido em terminal externo (facilita visualização) continue com os passos, senão basta apenas ignorar os passos seguintes.

3. Abra as configurações (Va no arquivo.md do repositorio e veja como abre as configs da sua IDE), e na barra de pesquisa pesquise por "C-cpp-compile-run: Run-in-external-terminal".

4. Marque a opção da caixa vazio.

5. Pronto, toda vez que você executar o programa atraves da extensão compile run (O play no canto direito superior), ele abrirar um terminal externo.

## Instalação e configuração do MinGW (Atenção isso serve pro Windows)

1. Acesse o link <https://sourceforge.net/projects/mingw/> e clique em download.

2. Execute oque baixou, e instale, apos clique em continue.

3. Ira abrir um Installation Manager, esse é as packages que podem ser baixados com MinGW, mas vamos focar me baixar os pacotes do C.

4. Ja abre direto no "Basic Setup" (Barra esquerda), mas tem o "All Packages" que possui bibliotecas mais especificas, uteis para mais pra frente do curso, mas agora não precisa.

5. No "Basic Setup" selecione as caixas que possuem o nome do Package:

    - mingw-developer-toolkit

    - mingw32-base

    - mingw32-gcc-g++

    - mingw32-gcc-objc

6. Apos marcar no canto superior esquerdo, clique em installation, selecione Apply Changes, e na tela que abrir selecione Apply. Espere o download finalizar e pode fechar.

7. ATENÇÃO: agora vem a parte importante que fara com que funcione de verdade. Configurar as variaveis de ambiente.

8. Na sua barra de pesquisa da barra de tarefa pesquise pelo nome "Variaveis de ambiente", selecione o primeiro que aparecer.

9. Na tela que aparecer selecione "Variaveis de Ambiente", olhe no primeiro quadrado que tem Variaveis de ussuario. E selecione "Path" e clique editar.

10. Ira aparecer os diretorios de suas variaveis de ambiente, nos devemos criar uma nova para o MinGW.

11. Para facilitar va no seu gerenciador de arquivos, siga o seguinte caminho, este computador -> Disco local -> MinGW -> Bin.

12. Em cima do gerenciador copie o caminho do diretorio.

13. Volte para tela das variaveis de ambiente e clique em novo e cole o caminho do diretorio, e feche tudo clicando em OK.

14. Pronto, resete seu vs code ou antigravity se estiver aberto (So fechar e abrir), e pronto vc ja tem o C instalado e configurado no WIndows.
