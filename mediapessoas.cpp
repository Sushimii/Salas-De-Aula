

#include <iostream>
using namespace std;


int main()
{
    //Declarando um array do tipo int de  nome "salas" de tamanho 6
    int salas[6];
    //Decalrando variavel "pessoas" do tipo int
    int pessoas;
    //Uma mensagem para o usuario para facilitar na resolução do exercicio
    cout << "Exemplo Sala 1: 35 / Sala 2 :4 / Sala 3: 22 / Sala 4: 20 / Sala 5: 36 / Sala 6: 30"<< endl<< endl;
    
    salas[0] = 35;
    salas[1]= 4;
    salas[2] = 22;
    salas [3] = 20;
    salas [4] = 36;
    salas [5] = 30;
    //Condição for que será utilziado para somar todos os valores
      for (int i = 0; i < 6; i++)
    {   
        //Todo comando for o valor de salas será somado no valor "pessoas"
        pessoas =pessoas + salas[i];
    }
    //Calculo da media de pessoas 
    double media = pessoas / 6;
    //Tela mostrando o resultado do calculo
    cout << "A media de pessoas é : " << media << endl;
    
    //Condição for que será utilziado para mostrar as salas que tem mais pessoas que a media
    for (int i = 0; i < 6; i++)
    {
        //Condição se o valor da variavel "salas" for maior que a media
        if (salas[i] > media)
        {
            //Mensagem mostrando as salas que possuem mais pessoas que a media
            cout << "Sala " << i+1 << " tem " << salas[i] << " pessoas e está acima da media " << endl;
        }
    }

    return 0;
}
