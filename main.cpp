#include<iostream>
using namespace std;

int main()
{
    long long int digito0, digito1, digito2, digito3, digito4, digito5, digito6, digito7, digito8, digito9, digito10, digito11, digito12, numero;

    long int sm, dm1, dm3, dm5, dm7, dm9, dm11;

    char s;



     cout << "\n digite o codigo de barras para verificar se esta correto.";



     cout << "\n exemplo 9782940199617";

    cout << "\n \n \n" << "codigo de barras";
     cin >> numero;

    // separador.

    digito0 = numero%10;
    numero = (numero-digito0)/10;

    digito1 = numero%10;
    numero = (numero-digito1)/10;

    digito2 = numero%10;
    numero = (numero-digito2)/10;

    digito3 = numero%10;
    numero = (numero-digito3)/10;

    digito4 = numero%10;
    numero = (numero-digito4)/10;

    digito5 = numero%10;
    numero = (numero-digito5)/10;

    digito6 = numero%10;
    numero = (numero-digito6)/10;

    digito7 = numero%10;
    numero = (numero-digito7)/10;

    digito8 = numero%10;
    numero = (numero-digito8)/10;

    digito9 = numero%10;
    numero = (numero-digito9)/10;

    digito10 = numero%10;
    numero = (numero-digito10)/10;

    digito11 = numero%10;
    numero = (numero-digito11)/10;

    digito12 = numero%10;

    //digito impa multiplicado por 3.

    dm1 = digito1*3;

    dm3 = digito3*3;

    dm5 = digito5*3;

    dm7 = digito7*3;

    dm9 = digito9*3;

    dm11 = digito11*3;

    // cálculo dos digitos conforme pedido.

    sm = dm1+digito2+dm3+digito4+dm5+digito6+dm7+digito8+dm9+digito10+dm11+digito12;

    numero=sm/10;
    numero=numero+1;
    numero=numero*10;
    numero=numero-sm;

    // desvio condicional verificando se foi digitado corretamente.

     if (numero==digito0)
    {
      cout << "\n O codigo de barras digitado esta correto" << "\n\n você deseja digitar outro código de barras ";

      cin >> s;}

    else if ( numero!=digito0 )
    {
       system ("clear");

      cout << "\n O codigo de barras digitado está incorreto por favor digite novamente";


    }

    if (s=='s')
    {



    }

    return 0;
}
