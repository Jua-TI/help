# Passos para instalação do Vs Code

## Oque é?

O Vs Code é uma IDE, basicamente um programa central que junta diversas ferramentas/extensoes que serve para compilar e criar softwares de diversas linguagens. É igual o antigravity, so muda alguns detalhes de contas e algumas ferramentas.

## Passos de instalação

1. Acesse o link <https://code.visualstudio.com/download> e selecione o seu tipo de sistema operacional e baixe.

2. Abra o executavel que baixou.

3. Aceite os termos de acordo, e na proxima tela selecione a caixa "Criar um atalho na area de trabalho".

4. Pronto, agora so avançar e instalar.

5. Seu Vs esta pronto para uso, mas deve ser instalado ainda as extensões e uns softwares por fora dependendo da linguagem ou frame work que deseja utilizar, normalmente o próprio Vs Code te ajuda nisso. Mas para programa em C olhe o arquivo C.md para ver os passos seguintes.

## Configurações inicias

### Uma configuração interessante de cores de "tema" para facilitar a leitura é a "Darcula", faça o seguinte

1. Na barra esquerda clique no icone de quadrado com um quadrado dentro (Extensões)

2. Na barra de pesquise procure pelo nome "Darcula"

3. Instale a extensão "Darcula Theme" (Provavelmente será a primeira opção)

4. Pode selecionar a opção "Set as Default Theme", e selecione a opção que contenha o nome "no italic", pois é mais agradavel visualmente.

5. Agora é so reiniciar o Vs Code e aproveitar. Seus codigos ficarão com um fundo mais escuro e com cores mais chamativas para facilitar a leitura.

### Configuração de salvar automaticamente

1. Na barra superior procure a opção "File".

2. Abra ela e procure pelo nome "Auto Save" ou "Salvar automaticamente" (Dependendo da linguagem do seu Vs Code).

3. Pronto, seu projeto sempre salvara quando você modificar ele, não precisando clicar no "ctrl+s" toda hora.

### Configuração de linguagem para Português: (Opcional, o ideal é tentar usar em ingles desde o começo para se acostumar com os termos técnicos)

1. Na barra esquerda procure o icone de engrenagem.

2. Clique no ícone de engrenagem no canto inferior esquerdo e depois em "Settings" ou "Configurações".

3. Na barra de pesquisa procure por "language" ou "linguagem".

4. Clique em "Edit in settings.json" ou "Editar em settings.json" ao lado de "Locale".

5. Adicione a seguinte linha dentro das chaves "{}":

```json

"locale": "pt-br"

```

Salve o arquivo e reinicie o Vs Code.
