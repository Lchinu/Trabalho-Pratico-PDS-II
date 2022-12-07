<div id="top"></div>

# Trabalho Prático

[![Contributors][contributors-shield]][contributors-url]
[![Tamanho][tamanho-shield]][tamanho-url]
[![Linguagens][linguagens-shield]][linguagens-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

<br/>


## Começando 🚀

O projeto presente neste repositório e nomeado pelos seus colaboradores como "caixa eletrônico do GECA" tem como seu principal objetivo replicar o funcionamento
de um caixa eletrônico. As funções implementadas são as seguintes:

🔸Logar: responsável por exercer a função do cartão nos caixas, essa função pede o usuário e sua respectiva senha;

🔸Sacar: o usuário pode realizar um saque de determinado valor (é preciso ser um valor disponível tanto em sua conta, quanto no limite do caixa);

🔸Depositar: o usuário tem o poder de depositar um valor para sua conta (ilimitado);

🔸Transferir: o caixa suporta inúmeros usuário que podem fazer transferências entre si;

🔸Extrato: é possível visualizar todas as operações realizadas por todos os usuários usando essa função.

⚠️ Além destas funções que são expostas ao rodar o código, também foi implementado no código a verificação de CPF e a atribuição de idade, nome e o próprio CPF
para todos os usuários. 

Com isso, foi possível replicar o funcionamento do caixa utilizando as habilidades adquiridas na disciplina Programação e Desenvolvimento de Software II.

Para conferir os user stories e o diagrama de classes, abra o seguinte link:
[Diagrama de Classes e User Stories](https://drive.google.com/drive/folders/1cvfTX_nM4hIMSaTGDjOpk2J5u71Z3WPO?usp=sharing)


Para começar a utilizar o repositório, você precisa cumprir todos os requisitos abaixo:

### Pré-requisitos

* Ter um compilador c++ instalado.
* Ter o mingw na versão 11.2.0 e/ou c++ na versão 17 ou superior.
* Ter o cmake instalado.
* Ter o git instalado.
* Estar em um ambiente linux e/ou derivado.
* Ter o gcov instalado.

<p align="right">(<a href="#top">Voltar para o topo</a>)</p>

### Instalação

1. Clone o repositório.
   ```sh
   git clone https://github.com/Lchinu/Trabalho-Pratico-PDS-II.git
   ```
2. Entre no diretório do repositório.
    ```sh
    cd Trabalho-Pratico-PDS-II
    ```
3. Execute o comando `make` para gerar o projeto.
    ```sh
    make
    ```
<p align="right">(<a href="#top">Voltar para o topo</a>)</p>

## Como utilizar o Trabalho Prático

Para começar a utilizar, após a instalação, basta rodar:

- Para Linux:

```sh
  ./bin/main
```
- Para Windows:

```sh
  ./bin/main.exe
```
- Usuário para teste:

```sh
  Login: laranjeira Senha: 1234
```
- Usuários para transferências(senhas entre parênteses):

```sh
  lchinu(2424), Riquelme3m(1111) e mathewsq(2607).
```

<p align="right">(<a href="#top">Voltar para o topo</a>)</p>

### Acessar a documentação

1. Clone o repositório.
   ```sh
   git clone https://github.com/Lchinu/Trabalho-Pratico-PDS-II.git
   ```
2. Entre na pasta onde foi clonado em seu computador
    ```sh
    Procure a origem do arquivo
    ```
3. Entre na pasta html
    ```sh
    Procure o arquivo "annotated" e abra em seu navegador.
    ```
<p align="right">(<a href="#top">Voltar para o topo</a>)</p>

## Contruibuindo

As contribuições são o que tornam a comunidade de código aberto um lugar incrível para aprender, inspirar e criar. Quaisquer contribuições que você fizer são **muito apreciadas**.

Se você tiver uma sugestão para melhorar o projeto, por favor, faça um fork do repositório e crie um pull request. Você também pode simplesmente abrir um issue com a tag "melhoria".
Não se esqueça de dar uma estrela ao projeto! Obrigado novamente!

1. Dê um fork no projeto
2. Cria sua branch de melhoria (`git checkout -b feature/MelhoriaIncrivel`)
3. Faça um commit de suas mudanças (`git commit -m 'feat: adicionado uma melhoria incrível'`)
4. Faça um push para sua branch (`git push origin feature/MelhoriaIncrivel`)
5. Abra um pull request.

<p align="right">(<a href="#top">Voltar para o topo</a>)</p>

## 🤝 Colaboradores

Agradecemos às seguintes pessoas que contribuíram para este projeto:

<table>
  <tr>
    <td align="center">
      <a href="#">
        <img src="https://avatars3.githubusercontent.com/u/94313134" width="100px;" alt="Lchinu"/><br>
        <sub>
          <b>Lchinu</b>
        </sub>
      </a>
    </td>
    <td align="center">
      <a href="#">
        <img src="https://avatars3.githubusercontent.com/u/112971684" width="100px;" alt="mathewshq"/><br>
        <sub>
          <b>mathewshq</b>
        </sub>
      </a>
    </td>
	<td align="center">
      <a href="#">
        <img src="https://avatars3.githubusercontent.com/u/110072781" width="100px;" alt="Riquelme3m"/><br>
        <sub>
          <b>Riquelme3m</b>
        </sub>
      </a>
    </td>
    <td align="center">
      <a href="#">
        <img src="https://avatars.githubusercontent.com/u/100239569" width="100px;" alt="joaoalves31"/><br>
        <sub>
          <b>joaoalves31</b>
        </sub>
      </a>
    </td>
    
  </tr>
</table>


[documentacao-shield]: https://img.shields.io/badge/Documentação%20Doxygen-clique%20aqui-blue
[linguagens-shield]: https://img.shields.io/github/languages/count/Lchinu/Trabalho-Pratico-PDS-II?style=for-the-badge
[linguagens-url]: https://github.com/Lchinu/Trabalho-Pratico-PDS-II/
[tamanho-shield]: https://img.shields.io/github/repo-size/Lchinu/Trabalho-Pratico-PDS-II?style=for-the-badge
[tamanho-url]: https://github.com/Lchinu/Trabalho-Pratico-PDS-II/
[contributors-shield]: https://img.shields.io/github/contributors/Lchinu/Trabalho-Pratico-PDS-II.svg?style=for-the-badge
[contributors-url]: https://github.com/Lchinu/Trabalho-Pratico-PDS-II/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/Lchinu/Trabalho-Pratico-PDS-II.svg?style=for-the-badge
[forks-url]: https://github.com/Lchinu/Trabalho-Pratico-PDS-II/network/members
[stars-shield]: https://img.shields.io/github/stars/Lchinu/Trabalho-Pratico-PDS-II.svg?style=for-the-badge
[stars-url]: https://github.com/Lchinu/Trabalho-Pratico-PDS-II/stargazers
[issues-shield]: https://img.shields.io/github/issues/Lchinu/Trabalho-Pratico-PDS-II.svg?style=for-the-badge
[issues-url]: https://github.com/Lchinu/Trabalho-Pratico-PDS-II/issues
[license-shield]: https://img.shields.io/github/license/Lchinu/Trabalho-Pratico-PDS-II.svg?style=for-the-badge
[license-url]: https://github.com/Lchinu/Trabalho-Pratico-PDS-II/blob/master/LICENSE.txt
