#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main();
int cont;

struct cadastrar
{
       char nome[30];
       int tel;
       int idade;
       float peso;
       float altura;
       char sexo[10];
       int orcamento[5];
       char tempo;
}ficha[200];

void cadastro(int cad)
{
     system("cls");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     printf("                 ---------BEM VINDO AO CADASTRO----------\n");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     fflush(stdin);
     printf("Informe o seu nome:\n");
     gets(ficha[cad].nome);
     printf("------------------------------------------------------------------------\n");
     fflush(stdin);
     printf("Informe o numero do seu telefone:\n");
     scanf("%d",&ficha[cad].tel);
     printf("------------------------------------------------------------------------\n");
     fflush(stdin);
     printf("Informe a sua idade:\n");
     scanf("%d",&ficha[cad].idade);
     printf("------------------------------------------------------------------------\n");
     fflush(stdin);
     printf("Informe o seu peso:\n");
     scanf("%f",&ficha[cad].peso);
     printf("------------------------------------------------------------------------\n");
     fflush(stdin);
     printf("Informe a sua altura:\n");
     scanf("%f",&ficha[cad].altura);
     printf("------------------------------------------------------------------------\n");
     fflush(stdin);
     printf("Informe o seu sexo:\n");
     gets(ficha[cad].sexo);
     printf("------------------------------------------------------------------------\n");
     printf("Por quantos meses vc pretende frequentar a academia?\n");
     scanf("%d",&ficha[cad].tempo);
     printf("------------------------------------------------------------------------\n");
     printf("SEU CADASTRO FOI FEITO COM SUCESSO !\n--Parabens--\n");
     getch();
}

int orcamento(int orc)
{
     char nome[30];
     int mes,mult,enc=1;
     
     system("cls");
     if(orc==-1)
     {
        printf("Vc ainda nao tem um cadastro!\n");
        getch();
        return(0);
     }else
     {
    printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     printf("            --------- BEM VINDO AO CAMPO DE ORCAMENTO ----------\n");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     printf("A mensalidade da academia eh: 60,00R$ por mes\n");
     fflush(stdin);
     printf("Informe o nome de quem vc pretende ver o orcamento?\n");
     gets(nome);
     printf("------------------------------------------------------------------------\n");
     for(cont=0;cont<=orc;cont++)
     {
        if(strcmp(nome,ficha[cont].nome)==0)
        {
           mult=(ficha[orc].tempo*60);
           enc=1;
        }else
        {
             printf("Nome nao encontrado!\n");
             getch();
             return(0);
             }
     }
     if(enc==0)
     {
        printf("------------------------------------------------------------------------\n");
        printf("Nome nao encontrado!\n");
        getch();
        return(0);
     }
     printf("------------------------------------------------------------------------\n");
     printf("Dados do orcamento\n");
     printf("------------------------------------------------------------------------\n");
     printf("Nome: %s\n",ficha[orc].nome);
     printf("Tempo pretendido de academia: %d meses\n",ficha[orc].tempo);
     printf("valor total pago eh: %d,00R$\n", mult);
     printf("------------------------------------------------------------------------\n");
     
     getch();
     }
}
     
     
int mostrar(int mostrar)
{
     system("cls");
     if(mostrar==-1)
     {
        printf("Vc ainda nao tem um cadastro!\n Por isso nao ha nenhum nome para se ver");
        getch();
        return(0);
     }
     int enc=0;
     system("cls");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     printf("                 ---------LISTA DE CADASTRADOS----------\n");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     for(cont=0;cont<=mostrar;cont++)
     {
        printf("\n------------------------------------------------------------------------\n");
        printf("Nome: ");printf("%s \n",ficha[cont].nome);
        printf("Telefone: ");printf("%d \n",ficha[cont].tel);
        printf("Idade: ");printf("%d \n",ficha[cont].idade);
        printf("Peso: ");printf("%f \n",ficha[cont].peso);
        printf("Altura: ");printf("%f \n",ficha[cont].altura);
        printf("Sexo: ");printf("%s \n",ficha[cont].sexo);
        printf("\n------------------------------------------------------------------------\n");
        enc=1;
        printf("\n");
        getch();
     }if(enc==0)printf("Nao ha nenhum nome cadastrado!\n");
     getch();
}
int buscar(int bus)
{
    system("cls");
     if(bus==-1)
     {
        printf("Vc ainda nao tem um cadastro!\nPor isso nao pode fazer buscas");
        getch();
        return(0);
     }
     int enc=0;
     char nome[30];
     system("cls");
     fflush(stdin);
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     printf("              ---------BEM VINDO AO CAMPO DE BUSCA----------\n");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     printf("Digite o nome que vc pretende buscar:\n");
     printf("------------------------------------------------------------------------\n");
     gets(nome);
     for(cont=0;cont<=bus;cont++)
     {
        if (strcmp(nome,ficha[cont].nome)==0)
        {
        printf("\nDados do nome buscado:\n\n");
        printf("------------------------------------------------------------------------\n");
        fflush(stdin);
        printf("Nome: ");printf("%s \n",ficha[cont].nome);
        printf("Telefone: ");printf("%d \n",ficha[cont].tel);
        printf("Idade: ");printf("%d \n",ficha[cont].idade);
        printf("Peso: ");printf("%f \n",ficha[cont].peso);
        printf("Altura: ");printf("%f \n",ficha[cont].altura);
        printf("Sexo: ");printf("%s \n",ficha[cont].sexo);
        printf("------------------------------------------------------------------------\n");
        enc=1;
        
        printf("Voltando ao menu principal ...");
        }
       
     }if(enc==0)
     {
        fflush(stdin);
        printf("\nNome nao encontrado\n");
     }
        
        getch();
     
}
int altera(int alt ) 
{
    
    system("cls");
     if(alt==-1)
     {
        printf("Vc ainda nao tem um cadastro!\nPor isso nao pode fazer alteracoes");
        getch();
        return(0);
     }
     int i,num,enc=0;
     char nome[30],resp[10];
     
     if(alt==-1)
     {
        printf("Nao ha nome a ser alterado!");
        getch();
        return(0);
     }
     do
     {
     system("cls");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     printf("           --------- BEM VINDO AO CAMPO DE BUSCA ----------\n");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     printf("Quais dos dados abaixo vc pretende alterar:\nDigite:\n");
     printf("------------------------------------------------------------------------\n");
     printf("\n1.NOME\n");
     printf("2.TELEFONE\n");
     printf("3.IDADE\n");
     printf("4.PESO\n");
     printf("5.ALTURA\n");
     printf("6.SEXO\n");
     printf("------------------------------------------------------------------------\n");
     
     scanf("%d",&num);
     if(num<0||num>6)
     {
        printf("\nOpcao inexistente!");
        getch();
        return(alt);
     }
     
     switch(num)
     {
        case 1:
             fflush(stdin);
             printf("Digite o nome de quem vc deseja alterar:\n");
             gets(nome);
             for(cont=0;cont<=alt;cont++)
             {
                if (strcmp(nome,ficha[cont].nome)==0)
                {
                fflush(stdin);
                printf("\nEntre com o novo nome:");
                gets(ficha[cont].nome);
                printf("\nNome alterado com sucesso!");
                }else 
                {
                 enc++;
                }
              }  
              if(enc==alt)
                {
                fflush(stdin);
                printf("\nO nome que vc digitou nao existe.");  
                }
             break;
            
             
        case 2:
             fflush(stdin);
             printf("Digite o nome de quem vc deseja alterar o telefone:\n");
             gets(nome);
             for(cont=0;cont<=alt;cont++)
             {
                if (strcmp(nome,ficha[cont].nome)==0)
                {
                fflush(stdin);
                printf("\nEntre com o novo numero do telefone:");
                scanf("%d",&ficha[cont].tel);
                printf("\nNumero de telefone alterado com sucesso!");
                }else 
                {
                 enc++;
                }
              }  
              if(enc==alt)
                {
                fflush(stdin);
                printf("\nO nome que vc digitou nao existe.");  
             }
             
             break;
             
        case 3:
             fflush(stdin);
             printf("Digite o nome de quem vc deseja alterar a idade:\n");
             gets(nome);
             for(cont=0;cont<=alt;cont++)
             {
                if (strcmp(nome,ficha[cont].nome)==0)
                {
                fflush(stdin);
                printf("\nEntre com a nova idade:");
                scanf("%d",&ficha[cont].idade);
                printf("\nSua idade foi alterada com sucesso!");
                }else 
                {
                 enc++;
                }
             }  
              if(enc==alt)
                {
                fflush(stdin);
                printf("\nO nome que vc digitou nao existe.");  
                }
             
             break;
        
        case 4:
             fflush(stdin);
             printf("Digite o nome de quem vc deseja alterar o peso:\n");
             gets(nome);
             for(cont=0;cont<=alt;cont++)
             {
                if (strcmp(nome,ficha[cont].nome)==0)
                {
                fflush(stdin);
                printf("\nEntre com o seu novo peso:");
                scanf("%f",&ficha[cont].peso);
                printf("\nSeu peso foi alterado com sucesso!");
                }else 
                {
                 enc++;
                }
              }  
              if(enc==alt)
                {
                fflush(stdin);
                printf("\nO nome que vc digitou nao existe.");  
                }
             break;
             
        case 5:
             fflush(stdin);
             printf("Digite o nome de quem vc deseja alterar a altura:\n");
             gets(nome);
             for(cont=0;cont<=alt;cont++)
             {
                if (strcmp(nome,ficha[cont].nome)==0)
                {
                fflush(stdin);
                printf("\nEntre com a sua nova altura:");
                scanf("%f",&ficha[cont].altura);
                printf("\nSua altura foi alterada com sucesso!");
                }else 
                {
                 enc++;
                }
             }  
              if(enc==alt)
                {
                fflush(stdin);
                printf("\nO nome que vc digitou nao existe.");  
                }
             
             break;
             
        case 6:
             fflush(stdin);
             printf("Digite o nome de quem vc deseja alterar o sexo:\n");
             gets(nome);
             for(cont=0;cont<=alt;cont++)
             {
                if (strcmp(nome,ficha[cont].nome)==0)
                {
                fflush(stdin);
                printf("\nEntre com o seu novo sexo:");
                scanf("%s",&ficha[cont].sexo);
                printf("\nO seu sexo foi alterado com sucesso!");
                }else 
                {
                 enc++;
                }
             }  
              if(enc==alt)
                {
                fflush(stdin);
                printf("\nO nome que vc digitou nao existe.");  
                }
             
             break;
             
     }
     fflush(stdin);
     do
     {
     printf("\n------------------------------------------------------------------------\n");
     printf("\nDeseja fazer mais alguma altracao?\nDigite<Sim> ou <nao>\n");
     printf("\n------------------------------------------------------------------------\n");
     gets(resp);
     if(resp[0] != 'n'&& 's' )printf("Passe a informacao corretamente.\n");
     }while(resp[0] !='n'&& resp[0] !='s' );
     }while(resp[0] =='s' && resp[1] =='i'&& resp[2]=='m');
     
}
int imc(int i)
{
     char sexo[10],nome[30];
     int num,enc=0;
     float pesoI;
     
     if(i==-1)
     {
        do
        {
        system("cls");
        printf("------------------------------------------------------------------------\n");
        printf("Vc ainda nao eh cadastrado \n");
        printf("Deseja sair ou fazer logo o seu cadastro?\n ");
        printf("\n------------------------------------------------------------------------\n");
        printf("Digite:\n");
        printf("\n1. Para fazer um rascunho de cadastro que nao sera salvo");
        printf("\n2. Para voltar ao menu principal\n");
        scanf("%d",&num);
        if(num<0||num>2)
        {
           printf("\nDigite o numero corretamente.\n");getch();
        }
        printf("\n");
        switch(num)
        {
           case 1:i++;
           cadastro(i);
           break;
           
           case 2:return(0);
           break;
        }
        }while(num>2);
        }
     if (i>-1)
     system("cls");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     printf("           --------- BEM VINDO AO CAMPO DE IMC ----------\n");
     printf("________________________________________________________________________\n");
     printf("------------------------------------------------------------------------\n");
     {
     printf("Digite <F> ou <M> para definir sexo:\n");
     gets(sexo);

     }
     if(sexo[0]!= 'm' && sexo[0] != 'f')
     {
             printf("Vc Digitou o sexo incorretamente!\nRetornar ao menu principal ...");
             getch();
             return(0);
     }
     
     fflush(stdin);
     printf("Digite o nome de quem vc pretende ver o IMC:\n");
     gets(nome);
     for(cont=0;cont<=i;cont++)
     {
     if (strcmp(nome,ficha[cont].nome)==0)
      {
     if(sexo[0]=='m')
     {
        printf("O IMC vai mostrar o seu peso ideal conforme a sua altura.\n ");
        getch();
        enc=1;
        pesoI=(72.7*ficha[cont].altura)-58;
        printf("Sua altura eh:%f \n",ficha[cont].altura);
        printf("Seu IMC eh: %f",pesoI);
        getch();
         switch(sexo[i])
           {
              case 'm':printf("\n\n---VOLTANDO AO MENU PRINCIPAL---");
                       getch();
                       return(0);
                       break;
           }
           if(enc==0)printf("Nome nao encontrado!\n");
           getch();
     }
      
     else
     {
         if(sexo[0]=='f')
         {
           enc=1;
           pesoI=(62.1*ficha[i].altura)-44.7;
           printf("Sua altura eh:%f \n",ficha[cont].altura);
           printf("seu IMC eh: %f",pesoI);
           getch();
           switch(sexo[0])
           {
              case 'f':printf("\n\n---VOLTANDO AO MENU PRINCIPAL---");
                       getch();
                       return(0);
                       break;
           }if(enc==0)printf("Nome nao encontrado!\n");
       getch();
         }else
         {
              printf("Digite o seu sexo corretamente.");
              getch();
         }
     }
     
     }
       
        }
        }


 main()
{
      int op,cont=-1;
      
      do
      {
          system("cls");
        printf("************************************************************************\n");
        printf("*************** CADASTRO DE ALUNOS DE UMA ACADEMIA  ********************\n");
        printf("************************************************************************\n");
        printf("Faca um cadastro se vc ainda nao tiver um.\n\n");
        printf("________________________________________________________________________\n");
        printf("O que vc pretende fazer:\n");
        printf("------------------------------------------------------------------------\n");
        printf("1.Cadastrar-se\n");
        printf("------------------------------------------------------------------------\n");
        printf("2.Mostrar lista de cadastrados\n");
        printf("------------------------------------------------------------------------\n");
        printf("3.Buscar dados Cadastrais\n");
        printf("------------------------------------------------------------------------\n");
        printf("4.Alterar dados Cadastrais\n");
        printf("------------------------------------------------------------------------\n");
        printf("5.Ver o seu indice de massa corporal <IMC>\n");
        printf("------------------------------------------------------------------------\n");
        printf("6.Apagar todo os dados\n");
        printf("------------------------------------------------------------------------\n");
        printf("7.Fazer orcamento\n");
        printf("------------------------------------------------------------------------\n");
        printf("8.Sair\n");
        printf("------------------------------------------------------------------------\n");
        
        scanf("%d",&op);
        
        switch(op)
        {
           case 1:cont++;
                  cadastro(cont);
                  break;
           
           case 2:fflush(stdin);
                mostrar(cont);
                  break;
                  
           case 3:fflush(stdin);
                buscar(cont);
                  break;
                  
           case 4:fflush(stdin);
                altera(cont);
                  break;
                  
           case 5:fflush(stdin);
                imc(cont);
                  break;
                  
           
                  
           case 6:printf("Todos os dados foram apagados com sucesso!");
                  main();
                //free(cad);
                  break;
           
           case 7:fflush(stdin);
                orcamento(cont);
                  break;
                  
           case 8:system("cls");
                printf("________________________________________________________________________\n");
                printf("------------------------------------------------------------------------\n");
                printf("ENCERRANDO PROGRAMA...");
                printf("\n________________________________________________________________________\n");
                printf("------------------------------------------------------------------------\n");
                getch();
                return(0);
                break;
                  
                    
          }
          }while(op!='1'&&'2'&&'3'&&'4'&&'5'&&'6'&&'7');
}
