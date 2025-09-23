//Producto Final, EL AUTOLAVADO//

#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<ctype.h>

void main()
{
clrscr();
int nu=1,nuu=1,nuuu=1,td=0,vehiculos,moto,camio,desc,tot,total,cost,dia,res,coche,tv,num,cami;

do
{
   do
   {
gotoxy(16,5);
cprintf("AUTOLAVADO EL POLLO, POR (ERIC VR) Y (ALAN AP),");
gotoxy(16,7);
cprintf("Que vehiculo deseas que te laven");
gotoxy(16,9);
cprintf("A)MOTO");
gotoxy(40,9);
cprintf("B)COCHE");
gotoxy(16,11);
cprintf("C)CAMIONETA");
gotoxy(40,11);
cprintf("D)CAMION");

   vehiculos=toupper(getch());
   if(vehiculos<'A'||vehiculos>'D')
   {
   gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
   gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
   getch();
   }
   }while(vehiculos<'A'||vehiculos>'D');

switch(vehiculos)
{

case'A':
  clrscr();
  do
  {
  gotoxy(25,6);
  cprintf("MOTO\n");
  gotoxy(20,7);
  cprintf("Que moto tienes\n");
  gotoxy(20,9);
  cprintf("A)MOTONETA\n");
  gotoxy(20,10);
  cprintf("B)MOTOCICLETA\n");
  gotoxy(20,11);
  cprintf("C)CUATRIMOTO\n");

   moto=toupper(getch());
   if(moto<'A'||moto>'C')
   {
   gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
   gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
   getch();
   }
   }while(moto<'A'||moto>'C');

    switch(moto)
    {
    case'A':
    clrscr();
     do
     {
    gotoxy(30,5);
    cprintf("MOTONETA, QUE DIA ES");
    gotoxy(30,7);
    cprintf("A)ENTRE LUNES Y MIERCOLES");
    gotoxy(30,8);
    cprintf("B)ENTRE JUEVES Y VIERNES");

     dia=toupper(getch());
     if(dia<'A'||dia>'B')
     {
     gotoxy(30,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
     gotoxy(30,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
     getch();
     }
     }while(dia<'A'||dia>'B');

      switch(dia)
      {
      case'A':
      clrscr();
      gotoxy(40,5);
      cprintf("ENTRE LUNES Y MIERCOLES");
      gotoxy(30,6);
      cout<<"INGRESA EL NUMERO DE MOTOS QUE QUIERES QUE LAVEN\n";
      cin>>num;
      gotoxy(30,8);
      do{
      cout<<"INGRESA EL COSTO DEL LAVADO PARA LA MOTO(123)\n";
      cin>>cost;
      if(cost<123||cost>123)cout<<"EERROORR ESE NO ES EL PRECIO DEL LAVADO, VUELVE A TECLEARLO\n";
      }while(cost<123||cost>123);

         if(num>=2&&num<=3)
         {
         while(nu<=num)
          {
           desc=cost*0.05;
           tot=(cost*num);
           total=tot-desc;
           td=td+total;
           cout<<"\nMOTO"<<nu<<"\t"<<"Usted pagara el total de\t$"<<total<<"\tcon su descuento de\t$"<<desc<<"\n";
           nu++;
           }
           cout<<"Acumulo un total a pagar de\t$"<<td;
         }
           else
             if(num>=4&&num<=20)
             {
             while(nuu<=num)
               {
               desc=cost*0.10;
               tot=cost*num;
               total=tot-desc;
               td=td+total;
               cout<<"\nMOTO"<<nuu<<"\tUsted pagara el total de\t$"<<total<<"\tcon su descuento de\t$"<<desc<<"\n";
               nuu++;
               }
               cout<<"Acumulo un total a pagar de\t$"<<td;
             }
               else
                 if(num>=1&&num<=1)
                 {
                 while(nuuu<=num)
                   {
                   total=cost*num;
                   td=td+total;
                   cout<<"\nMOTO"<<nuuu<<"\tUsted pagara el total de\t$"<<total;
                   nuuu++;
                   }
                   cout<<"Acumulo un total a pagar de\t$"<<td;
                 }
                   break;             //fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff//


      case'B':
      clrscr();
      gotoxy(40,5);
      cprintf("ENTRE JUEVES Y VIERNES\n");
      gotoxy(30,6);
      cout<<"INGRESA EL NUMERO DE MOTOS QUE QUIERES QUE LAVEN\n";
      cin>>num;
      gotoxy(30,8);
      do{
      cout<<"INGRESA EL COSTO DEL LAVADO PARA LA MOTO(123)\n";
      cin>>cost;
      if(cost<123||cost>123)cout<<"EERROORR ESE NO ES EL PRECIO DEL LAVADO, VUELVE A TECLEARLO\n";
      }while(cost<123||cost>123);

       {
       total=cost*num;
       cout<<"Usted pagara el total de\t$"<<total;
       }
       break;
       }
       break;                              //pppppppppppppppppppppppppprrrrrrrrrrrrrrrrrrrrrrrrrroooooooooooooooooooobleeeeemmm//

    case'B':
    clrscr();
     do
     {
    gotoxy(30,5);
    cprintf("MOTOCICLETA, QUE DIA ES");
    gotoxy(30,7);
    cprintf("A)ENTRE LUNES Y MIERCOLES");
    gotoxy(30,8);
    cprintf("B)ENTRE JUEVES Y VIERNES");

    dia=toupper(getch());
    if(dia<'A'||dia>'B')
     {
     gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
     gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
     getch();
     }
     }while(dia<'A'||dia>'B');
     switch(dia)
     {
      case'A':
      clrscr();
      gotoxy(40,5);
      cprintf("ENTRE LUNES Y MIERCOLES");
      gotoxy(30,6);
      cout<<"INGRESA EL NUMERO DE MOTOS QUE QUIERES QUE LAVEN\n";
      cin>>num;
      gotoxy(30,8);
      do{
      cout<<"INGRESA EL COSTO DEL LAVADO PARA LA MOTO(123)\n";
      cin>>cost;
      if(cost<123||cost>123)cout<<"EERROORR ESE NO ES EL PRECIO DEL LAVADO, VUELVE A TECLEARLO\n";
      }while(cost<123||cost>123);

          if(num>=2&&num<=3)
           {
           desc=cost*0.05;
           tot=(cost*num);
           total=tot-desc;
           cout<<"Usted pagara el total de\t$"<<total<<"\tcon su descuento de\t$"<<desc<<"\n";
           }
           else
             if(num>=4&&num<=20)
               {
               desc=cost*0.10;
               tot=cost*num;
               total=tot-desc;
               cout<<"Usted pagara el total de\t$"<<total<<"\tcon su descuento de\t$"<<desc<<"\n";
               }
               else
                 if(num>=1&&num<=1)
                   {
                   total=cost*num;
                   cout<<"Usted pagara el total de\t$"<<total;
                   }
                   break;

      case'B':
      clrscr();
      gotoxy(40,5);
      cprintf("ENTRE JUEVES Y VIERNES\n");
      gotoxy(30,6);
      cout<<"INGRESA EL NUMERO DE MOTOS QUE QUIERES QUE LAVEN\n";
      cin>>num;
      gotoxy(30,8);
      do{
      cout<<"INGRESA EL COSTO DEL LAVADO PARA LA MOTO(123)\n";
      cin>>cost;
      if(cost<123||cost>123)cout<<"EERROORR ESE NO ES EL PRECIO DEL LAVADO, VUELVE A TECLEARLO\n";
      }while(cost<123||cost>123);

       {
       total=cost*num;
       cout<<"Usted pagara el total de\t$"<<total;
       }
       break;
       }
       break;

    case'C':
    clrscr();
      do
      {
    gotoxy(30,5);
    cprintf("CUATRIMOTO, QUE DIA ES");
    gotoxy(30,7);
    cprintf("A)ENTRE LUNES Y MIERCOLES");
    gotoxy(30,8);
    cprintf("B)ENTRE JUEVES Y VIERNES");

    dia=toupper(getch());
    if(dia<'A'||dia>'B')
      {
      gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
      gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
      getch();
      }
      }while(dia<'A'||dia>'B');
      switch(dia)
      {
      case'A':
      clrscr();
      gotoxy(40,5);
      cprintf("ENTRE LUNES Y MIERCOLES");
      gotoxy(30,6);
      cout<<"INGRESA EL NUMERO DE MOTOS QUE QUIERES QUE LAVEN\n";
      cin>>num;
      gotoxy(30,8);
      do{
      cout<<"INGRESA EL COSTO DEL LAVADO PARA LA MOTO(130)\n";
      cin>>cost;
      if(cost<130||cost>130)cout<<"EERROORR ESE NO ES EL PRECIO DEL LAVADO, VUELVE A TECLEARLO\n";
      }while(cost<130||cost>130);

       if(num>=2&&num<=3)
           {
           desc=cost*0.05;
           tot=(cost*num);
           total=tot-desc;
           cout<<"Usted pagara el total de\t$"<<total<<"\tcon su descuento de\t$"<<desc<<"\n";
           }
           else
             if(num>=4&&num<=20)
               {
               desc=cost*0.10;
               tot=cost*num;
               total=tot-desc;
               cout<<"Usted pagara el total de\t$"<<total<<"\tcon su descuento de\t$"<<desc<<"\n";
               }
               else
                 if(num>=1&&num<=1)
                   {
                   total=cost*num;
                   cout<<"Usted pagara el total de\t$"<<total;
                   }
                   break;

      case'B':
      clrscr();
      gotoxy(40,5);
      cprintf("ENTRE JUEVES Y MIERCOLES");
      gotoxy(30,6);
      cout<<"INGRESA EL NUMERO DE MOTOS QUE QUIERES QUE LAVEN\n";
      cin>>num;
      gotoxy(30,8);
      do{
      cout<<"INGRESA EL COSTO DEL LAVADO PARA LA MOTO(130)\n";
      cin>>cost;
      if(cost<130||cost>130)cout<<"EERROORR ESE NO ES EL PRECIO DEL LAVADO, VUELVE A TECLEARLO\n";
      }while(cost<130||cost>130);

       {
       total=cost*num;
       cout<<"Usted pagara el total de\t$"<<total;
       }
       break;
       }
       break;
       }
       break;

case'B':
   clrscr();
   do
   {
   gotoxy(20,6);
   cprintf("COCHE\n");
   gotoxy(15,7);
   cprintf("Que coche tienes\n");
   gotoxy(20,9);
   cprintf("A)AVEO\n");
   gotoxy(20,10);
   cprintf("B)CHEVY\n");
   gotoxy(20,11);
   cprintf("C)SPARK\n");
   gotoxy(20,12);
   cprintf("D)OTRO\n");

    coche=toupper(getch());
    if(coche>'A'||coche<'D')
      {
      gotoxy(20,14);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
      gotoxy(20,15);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
      }
      }while(coche<'A'||coche>'D');
      switch(coche)
      {

 case'A':
    clrscr();
       do
       {
    gotoxy(30,5);
    cprintf("AVEO\n");
    gotoxy(25,6);
    cprintf("Que tipo de lavado deseas\n");
    gotoxy(28,8);
    cprintf("A)MOTOR\n");
    gotoxy(28,9);
    cprintf("B)COMPLETO\n");
    gotoxy(28,10);
    cprintf("C)NORMAL\n");

      tv=toupper(getch());
      if(tv>'A'||tv<'C')
       {
       gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
       gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
       }
       }while(tv<'A'||tv>'C');
       switch(tv)
       {

      case'A':
      clrscr();
      gotoxy(30,5);
      cprintf("MOTOR\n");
      gotoxy(17,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.05;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
       }
       break;

      case'B':
      clrscr();
      gotoxy(30,5);
      cprintf("COMPLETO\n");
      gotoxy(17,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.05;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
       }
       break;

      case'C':
      clrscr();
      gotoxy(30,5);
      cprintf("NORMAL\n");
      gotoxy(17,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.05;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
       }
       break;
       }
       break;

 case'B':
    clrscr();
       do
       {
    gotoxy(30,5);
    cprintf("CHEVY\n");
    gotoxy(25,6);
    cprintf("Que tipo de lavado deseas\n");
    gotoxy(28,8);
    cprintf("A)MOTOR\n");
    gotoxy(28,9);
    cprintf("B)COMPLETO\n");
    gotoxy(28,10);
    cprintf("C)NORMAL\n");

      tv=toupper(getch());
      if(tv>'A'||tv<'C')
       {
       gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
       gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
       }
       }while(tv<'A'||tv>'C');
       switch(tv)
       {

      case'A':
      clrscr();
      gotoxy(30,5);
      cprintf("MOTOR\n");
      gotoxy(15,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.05;
       total=cost-desc;
       gotoxy(15,6);
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'B':
      clrscr();
      gotoxy(30,5);
      cprintf("COMPLETO\n");
      gotoxy(15,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.05;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'C':
      clrscr();
      gotoxy(30,5);
      cprintf("NORMAL\n");
      gotoxy(15,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.05;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;
       }
       break;

 case'C':
    clrscr();
       do
       {
    gotoxy(30,5);
    cprintf("SPARK\n");
    gotoxy(25,6);
    cprintf("Que tipo de lavado deseas\n");
    gotoxy(28,8);
    cprintf("A)MOTOR\n");
    gotoxy(28,9);
    cprintf("B)COMPLETO\n");
    gotoxy(28,10);
    cprintf("C)NORMAL\n");

      tv=toupper(getch());
      if(tv>'A'||tv<'C')
       {
       gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
       gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
       getch();
       }
       }while(tv<'A'||tv>'C');
       switch(tv)
       {

      case'A':
      clrscr();
      gotoxy(30,5);
      cprintf("MOTOR\n");
      gotoxy(15,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.05;
       total=cost-desc;
       gotoxy(15,6);
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'B':
      clrscr();
      gotoxy(30,5);
      cprintf("COMPLETO\n");
      gotoxy(15,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.05;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'C':
      clrscr();
      gotoxy(30,5);
      cprintf("NORMAL\n");
      gotoxy(15,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.05;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;
       }
       break;


 case'D':
    clrscr();
       do
       {
    gotoxy(30,5);
    cprintf("OTRO\n");
    gotoxy(25,6);
    cprintf("¿Que tipo de lavado deseas?\n");
    gotoxy(28,8);
    cprintf("A)MOTOR\n");
    gotoxy(28,9);
    cprintf("B)COMPLETO\n");
    gotoxy(28,10);
    cprintf("C)NORMAL\n");

      tv=toupper(getch());
      if(tv>'A'||tv<'C')
       {
       gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
       gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
       getch();
       }
       }while(tv<'A'||tv>'C');
       switch(tv)
       {

      case'A':
      clrscr();
      gotoxy(30,5);
      cprintf("MOTOR\n");
      gotoxy(15,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       cout<<"Usted pagara el total de\t$"<<cost;
       }
       break;

      case'B':
      clrscr();
      gotoxy(30,5);
      cprintf("COMPLETO\n");
      gotoxy(15,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       cout<<"Usted pagara el total de\t$"<<cost;
       }
       break;

      case'C':
      clrscr();
      gotoxy(30,5);
      cprintf("NORMAL\n");
      gotoxy(15,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       cout<<"Usted pagara el total de\t$"<<cost;
       }
       break;
       }
       break;
       }
       break;
        //cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc//

case'C':
   clrscr();
   do
   {
   gotoxy(20,6);
   cprintf("CAMIONETA\n");
   gotoxy(15,7);
   cprintf("Que camioneta tienes\n");
   gotoxy(19,9);
   cprintf("A)REDILAS\n");
   gotoxy(19,10);
   cprintf("B)DOBLE\n");
   gotoxy(19,11);
   cprintf("C)CERRADA\n");
   gotoxy(19,12);
   cprintf("D)OTRO\n");

    cami=toupper(getch());
    if(cami>'A'||cami<'D')
      {
      gotoxy(20,14);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
      gotoxy(20,15);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
      }
      }while(cami<'A'||cami>'D');
      switch(cami)
      {

 case'A':
    clrscr();
       do
       {
    gotoxy(30,5);
    cprintf("REDILAS\n");
    gotoxy(25,6);
    cprintf("Que tipo de lavado deseas\n");
    gotoxy(28,8);
    cprintf("A)MOTOR\n");
    gotoxy(28,9);
    cprintf("B)COMPLETO\n");
    gotoxy(28,10);
    cprintf("C)NORMAL\n");

      tv=toupper(getch());
      if(tv>'A'||tv<'C')
       {
       gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
       gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
       }
       }while(tv<'A'||tv>'C');
       switch(tv)
       {

      case'A':
      clrscr();
      gotoxy(30,5);
      cprintf("MOTOR\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.10;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'B':
      clrscr();
      gotoxy(30,5);
      cprintf("COMPLETO\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.10;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'C':
      clrscr();
      gotoxy(30,5);
      cprintf("NORMAL\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.10;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;
       }
       break;

 case'B':
    clrscr();
       do
       {
    gotoxy(30,5);
    cprintf("DOBLE\n");
    gotoxy(25,6);
    cprintf("Que tipo de lavado deseas\n");
    gotoxy(28,8);
    cprintf("A)MOTOR\n");
    gotoxy(28,9);
    cprintf("B)COMPLETO\n");
    gotoxy(28,10);
    cprintf("C)NORMAL\n");

      tv=toupper(getch());
      if(tv>'A'||tv<'C')
       {
       gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
       gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
       }
       }while(tv<'A'||tv>'C');
       switch(tv)
       {

      case'A':
      clrscr();
      gotoxy(30,5);
      cprintf("MOTOR\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.10;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'B':
      clrscr();
      gotoxy(30,5);
      cprintf("COMPLETO\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.10;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'C':
      clrscr();
      gotoxy(30,5);
      cprintf("NORMAL\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.10;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;
       }
       break;

 case'C':
    clrscr();
       do
       {
    gotoxy(30,5);
    cprintf("CERRADA\n");
    gotoxy(25,6);
    cprintf("¿Que tipo de lavado deseas?\n");
    gotoxy(28,8);
    cprintf("A)MOTOR\n");
    gotoxy(28,9);
    cprintf("B)COMPLETO\n");
    gotoxy(28,10);
    cprintf("C)NORMAL\n");

      tv=toupper(getch());
      if(tv>'A'||tv<'C')
       {
       gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
       gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
       getch();
       }
       }while(tv<'A'||tv>'C');
       switch(tv)
       {

      case'A':
      clrscr();
      gotoxy(30,5);
      cprintf("MOTOR\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.10;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'B':
      clrscr();
      gotoxy(30,5);
      cprintf("COMPLETO\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.10;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;

      case'C':
      clrscr();
      gotoxy(30,5);
      cprintf("NORMAL\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       desc=cost*0.10;
       total=cost-desc;
       cout<<"Usted pagara el total de\t$"<<total<<"Con su descuento de\t$"<<desc;
       }
       break;
       }
       break;


 case'D':
    clrscr();
       do
       {
    gotoxy(30,5);
    cprintf("OTRO\n");
    gotoxy(25,6);
    cprintf("Que tipo de lavado deseas\n");
    gotoxy(28,8);
    cprintf("A)MOTOR\n");
    gotoxy(28,9);
    cprintf("B)COMPLETO\n");
    gotoxy(28,10);
    cprintf("C)NORMAL\n");

      tv=toupper(getch());
      if(tv>'A'||tv<'C')
       {
       gotoxy(20,13);cout<<"¡¡ERROR ESA LETRA NO ESTA INCLUIDA¡¡\n";
       gotoxy(20,14);cout<<"PRESIONA ENTER PARA VOLVER A TECLEAR UNA OPCION\n";
       getch();
       }
       }while(tv<'A'||tv>'C');
       switch(tv)
       {

      case'A':
      clrscr();
      gotoxy(30,5);
      cprintf("MOTOR\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       cout<<"Usted pagara el total de\t$"<<cost;
       }
       break;

      case'B':
      clrscr();
      gotoxy(30,5);
      cprintf("COMPLETO\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       cout<<"Usted pagara el total de\t$"<<cost;
       }
       break;

      case'C':
      clrscr();
      gotoxy(30,5);
      cprintf("NORMAL\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
       {
       cout<<"Usted pagara el total de\t$"<<cost;
       }
       break;
       }
       break;
       }
       break;

case'D':
   clrscr();
   do
   {
   gotoxy(40,5);
   cprintf("CAMIONES\n");
   gotoxy(35,6);
   cprintf("elige el que deseas que te laven\n");
   gotoxy(40,8);
   cprintf("A)AUTOBUS\n");
   gotoxy(40,9);
   cprintf("B)TRACTOR\n");
   gotoxy(40,10);
   cprintf("C)PIPA DE GAS\n");

   camio=toupper(getch());
   if(camio<'A'||camio>'C')
   {
   gotoxy(10,13);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
   gotoxy(10,14);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
   }
   }while(camio<'A'||camio>'C');

  switch(camio)
   {

    case'A':
    clrscr();
    do
    {
    gotoxy(45,5);
    cprintf("AUTOBUS, Que lavado deseas\n");
    gotoxy(50,7);
    cprintf("A)MOTOR\n");
    gotoxy(50,8);
    cprintf("B)COMPLETO\n");
    gotoxy(50,9);
    cprintf("C)NORMAL\n");

     tv=toupper(getch());
     if(tv<'A'||tv>'C')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      }
     }while(tv<'A'||tv>'C');
    switch(tv)
     {

      case'A':
      clrscr();
      do
      {
      gotoxy(60,5);
      cprintf("MOTOR\n");
      gotoxy(57,6);
      cprintf("Que dia es\n");
      gotoxy(60,8);
      cprintf("A)ENTRE LUNES Y JUEVES\n");
      gotoxy(60,9);
      cprintf("B)VIERNES\n");


     dia=toupper(getch());
     if(dia<'A'||dia>'B')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      }
     }while(dia<'A'||dia>'B');
    switch(dia)
    {

      case'A':
      clrscr();
      gotoxy(20,5);
      cprintf("ENTRE LUNES Y JUEVES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        cout<<"Usted pagara  el total de\t$"<<cost;
        }
        break;

       case'B':
       clrscr();
      gotoxy(20,5);
      cprintf("VIERNES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        desc=cost*0.20;
        total=cost-desc;
        cout<<"Usted pagara  el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
        }
        break;
        }
        break;


      case'B':
      clrscr();
      do
      {
      gotoxy(60,5);
      cprintf("COMPLETO\n");
      gotoxy(57,6);
      cprintf("Que dia es\n");
      gotoxy(60,8);
      cprintf("A)ENTRE LUNES Y JUEVES\n");
      gotoxy(60,9);
      cprintf("B)VIERNES\n");


     dia=toupper(getch());
     if(dia<'A'||dia>'B')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(dia<'A'||dia>'B');
    switch(dia)
    {

      case'A':
      clrscr();
      gotoxy(20,5);
      cprintf("ENTRE LUNES Y JUEVES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        cout<<"Usted pagara  el total de\t$"<<cost;
        }
        break;

       case'B':
       clrscr();
      gotoxy(20,5);
      cprintf("VIERNES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        desc=cost*0.20;
        total=cost-desc;
        cout<<"Usted pagara  el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
        }
        break;
        }
        break;

      case'C':
      clrscr();
      do
      {
      gotoxy(60,5);
      cprintf("NORMAL\n");
      gotoxy(57,6);
      cprintf("Que dia es\n");
      gotoxy(60,8);
      cprintf("A)ENTRE LUNES Y JUEVES\n");
      gotoxy(60,9);
      cprintf("B)VIERNES\n");


     dia=toupper(getch());
     if(dia<'A'||dia>'B')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(dia<'A'||dia>'B');
    switch(dia)
    {

      case'A':
      clrscr();
      gotoxy(20,5);
      cprintf("ENTRE LUNES Y JUEVES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        cout<<"Usted pagara  el total de\t$"<<cost;
        }
        break;

       case'B':
       clrscr();
      gotoxy(20,5);
      cprintf("VIERNES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        desc=cost*0.20;
        total=cost-desc;
        cout<<"Usted pagara  el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
        }
        break;
        }
        break;
        }
        break;    //ggggggggggggggggggggggggggggggggg//

    case'B':
    clrscr();
    do
    {
    gotoxy(50,5);
    cprintf("TRACTOR ¿Que lavado deseas?\n");
    gotoxy(50,7);
    cprintf("A)MOTOR\n");
    gotoxy(50,8);
    cprintf("B)COMPLETO\n");
    gotoxy(50,9);
    cprintf("C)NORMAL\n");

     tv=toupper(getch());
     if(tv<'A'||tv>'C')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(tv<'A'||tv>'C');
    switch(tv)
     {


      case'A':
      clrscr();
      do
      {
      gotoxy(60,5);
      cprintf("MOTOR\n");
      gotoxy(60,6);
      cprintf("Que dia es\n");
      gotoxy(60,8);
      cprintf("A)ENTRE LUNES Y JUEVES\n");
      gotoxy(60,9);
      cprintf("B)VIERNES\n");


     dia=toupper(getch());
     if(dia<'A'||dia>'B')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(dia<'A'||dia>'B');
    switch(dia)
    {

      case'A':
      clrscr();
      gotoxy(20,5);
      cprintf("ENTRE LUNES Y JUEVES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        cout<<"Usted pagara  el total de\t$"<<cost;
        }
        break;

       case'B':
       clrscr();
      gotoxy(20,5);
      cprintf("VIERNES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        desc=cost*0.20;
        total=cost-desc;
        cout<<"Usted pagara  el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
        }
        break;
        }
        break;


      case'B':
      clrscr();
      do
      {
      gotoxy(60,5);
      cprintf("COMPLETO\n");
      gotoxy(60,6);
      cprintf("Que dia es\n");
      gotoxy(60,8);
      cprintf("A)ENTRE LUNES Y JUEVES\n");
      gotoxy(60,9);
      cprintf("B)VIERNES\n");


     dia=toupper(getch());
     if(dia<'A'||dia>'B')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(dia<'A'||dia>'B');
    switch(dia)
    {

      case'A':
      clrscr();
      gotoxy(20,5);
      cprintf("ENTRE LUNES Y JUEVES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        cout<<"Usted pagara  el total de\t$"<<cost;
        }
        break;

       case'B':
       clrscr();
      gotoxy(20,5);
      cprintf("VIERNES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        desc=cost*0.20;
        total=cost-desc;
        cout<<"Usted pagara  el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
        }
        break;
        }
        break;

      case'C':
      clrscr();
      do
      {
      gotoxy(60,5);
      cprintf("NORMAL\n");
      gotoxy(60,6);
      cprintf("Que dia es\n");
      gotoxy(60,8);
      cprintf("A)ENTRE LUNES Y JUEVES\n");
      gotoxy(60,9);
      cprintf("B)VIERNES\n");


     dia=toupper(getch());
     if(dia<'A'||dia>'B')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(dia<'A'||dia>'B');
    switch(dia)
    {

      case'A':
      clrscr();
      gotoxy(20,5);
      cprintf("ENTRE LUNES Y JUEVES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        cout<<"Usted pagara  el total de\t$"<<cost;
        }
        break;

       case'B':
       clrscr();
      gotoxy(20,5);
      cprintf("VIERNES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        desc=cost*0.20;
        total=cost-desc;
        cout<<"Usted pagara  el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
        }
        break;
        }
        break;
        }
        break;    //ggggggggggggggggggggggggggggggggg//


    case'C':
    clrscr();
    do
    {
    gotoxy(50,5);
    cprintf("PIPA DE GAS ¿Que lavado deseas?\n");
    gotoxy(50,7);
    cprintf("A)MOTOR\n");
    gotoxy(50,8);
    cprintf("B)COMPLETO\n");
    gotoxy(50,9);
    cprintf("C)NORMAL\n");

     tv=toupper(getch());
     if(tv<'A'||tv>'C')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(tv<'A'||tv>'C');
    switch(tv)
     {

      case'A':
      clrscr();
      do
      {
      gotoxy(60,5);
      cprintf("MOTOR\n");
      gotoxy(60,6);
      cprintf("¿Que dia es?\n");
      gotoxy(60,8);
      cprintf("A)ENTRE LUNES Y JUEVES\n");
      gotoxy(60,9);
      cprintf("B)VIERNES\n");


     dia=toupper(getch());
     if(dia<'A'||dia>'B')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(dia<'A'||dia>'B');
    switch(dia)
    {

      case'A':
      clrscr();
      gotoxy(20,5);
      cprintf("ENTRE LUNES Y JUEVES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        cout<<"Usted pagara  el total de\t$"<<cost;
        }
        break;

       case'B':
       clrscr();
      gotoxy(20,5);
      cprintf("VIERNES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        desc=cost*0.20;
        total=cost-desc;
        cout<<"Usted pagara  el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
        }
        break;
        }
        break;

      case'B':
      clrscr();
      do
      {
      gotoxy(60,5);
      cprintf("COMPLETO\n");
      gotoxy(60,6);
      cprintf("¿Que dia es?\n");
      gotoxy(60,8);
      cprintf("A)ENTRE LUNES Y JUEVES\n");
      gotoxy(60,9);
      cprintf("B)VIERNES\n");


     dia=toupper(getch());
     if(dia<'A'||dia>'B')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(dia<'A'||dia>'B');
    switch(dia)
    {

      case'A':
      clrscr();
      gotoxy(20,5);
      cprintf("ENTRE LUNES Y JUEVES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        cout<<"Usted pagara  el total de\t$"<<cost;
        }
        break;

       case'B':
       clrscr();
      gotoxy(20,5);
      cprintf("VIERNES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        desc=cost*0.20;
        total=cost-desc;
        cout<<"Usted pagara  el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
        }
        break;
        }
        break;

      case'C':
      clrscr();
      do
      {
      gotoxy(60,5);
      cprintf("NORMAL\n");
      gotoxy(60,6);
      cprintf("Que dia es\n");
      gotoxy(60,8);
      cprintf("A)ENTRE LUNES Y JUEVES\n");
      gotoxy(60,9);
      cprintf("B)VIERNES\n");


     dia=toupper(getch());
     if(dia<'A'||dia>'B')
      {
      gotoxy(10,12);cout<<"¡¡ERROR TE AS EQUIVOCADO, ESA LETRA NO EXISTE¡¡\n";
      gotoxy(10,13);cout<<"PRESIONA ENTER PARA CONSULTAR EL TIPO DE VEHICULO\n";
      getch();
      }
     }while(dia<'A'||dia>'B');
    switch(dia)
    {

      case'A':
      clrscr();
      gotoxy(20,5);
      cprintf("ENTRE LUNES Y JUEVES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        cout<<"Usted pagara  el total de\t$"<<cost;
        }
        break;

       case'B':
       clrscr();
      gotoxy(20,5);
      cprintf("VIERNES\n");
      gotoxy(19,6);
      cout<<"INGRESA EL COSTO DEL LAVADO\n";
      cin>>cost;
        {
        desc=cost*0.20;
        total=cost-desc;
        cout<<"Usted pagara  el total de\t$"<<total<<"\tCon su descuento de\t$"<<desc;
        }
        break;
        }
        break;
        }
        break;
        }
        break;
        }

do
{
gotoxy(30,20);
cout<<"DESA CONSULTAR OTRO VEHICULO S/N\n";
res=toupper (getch());
clrscr();
if(res!='S'&& res!='N')cout<<"EERROORR\n";
}while(res!='S'&&res!='N');

}while(res=='S');

getch();
}


