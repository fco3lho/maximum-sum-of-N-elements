# Máxima soma entre <i>n</i> elementos

O seguinte código tem como finalidade extrair números inteiros positivos e/ou negativos de um arquivo com extensão <code>.txt</code>, armazená-los em uma estrutura de lista linear e, a partir disso, manipulá-los com a finalidade de encontrar a máxima soma entre os elementos extraídos do arquivo.
 
 ## Sobre o código
 
Foi utilizado um arquivo <code>.txt</code>, encontrado também no repositório (<code>numbers.txt</code>), com 20 diferentes números inteiros. Foi utilizado como parâmetro a quebra de linha dentro do arquivo para a separação dos números, inserindo-os assim, na lista linear.

### Explicando o algoritmo

Na função nomeada de <code>calculateMaxSum()</code> no arquivo <i>maxsum.cpp</i>, <code>aux</code> é a soma do segmento A de i até k, como <strong>i</strong> varia de 1 até n e <strong>k</strong> varia de i até n, o valor de <code>sum.number</code> é a altura do vetor A de i até n.

### Observações

<ul>
 <li>É possível modificar o número máximo de elementos, basta trocar o valor definido de <code>MAXTAM</code> no arquivo <i>maxsum.hpp</i> e colocar a quantidade de números que deseja testar.</li>
 
 <li>Também é possível mudar o arquivo que deseja analisar, basta ir em <i>maxsum.cpp</i>, na função <code>void readFile(Lista *l, Item d)</code>, e mudar o parâmetro <code>my_file.open("numbers.txt")</code> para <code>my_file.open("NomeDoSeuArquivo.txt")</code>.</li>
<li><strong>É de extrema importância a configuração correta do arquivo <code>.txt</code>, pois se houver um caractere especial dentro do mesmo, a função não conseguirá converter as strings em inteiros, comprometendo o código.</strong></li>
</ul>

## Compilação e Execução

O repositório possui um arquivo <i>Makefile</i> que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

<table align="center">
  <tr>
    <td><strong>Comando</strong></td>
    <td><strong>Função</strong></td>
  </tr>
  <tr>
    <td><code>make clean</code></td>
    <td>Apaga a última compilação realizada contida na pasta build.</td>
  </tr>
  <tr>
    <td><code>make</code></td>
    <td>Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build.</td>
  </tr>
  <tr>
    <td><code>make run</code></td>
    <td>Executa o programa da pasta build após a realização da compilação.</td>
  </tr>
</table>
