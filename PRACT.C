#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

void main()
{
clrscr();
   int gd = DETECT, gm, midx, midy;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

  midx = getmaxx()/2;
  midy = getmaxy()/2;

   setcolor(WHITE);
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
   settextjustify(CENTER_TEXT,CENTER_TEXT);
   outtextxy(midx, midy-20, "7-Segment LED Display Simulation");
   outtextxy(midx, midy+20, "Press any key to start...");
   getch();
   cleardevice();
   delay(1000);
   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-130,midy-210,midx+130,midy+210); //main  >>8888
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);
   delay(1000);
   cleardevice();
  
   delay(1000);
   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main           >>0000
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   //rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   //floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);


   delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main          >>1111
  // rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   //floodfill(midx, midy-170,WHITE);

  // rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
  // floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

  // rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   //floodfill(midx, midy,WHITE);

  // rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   //floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   //rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   //floodfill(midx, midy+170,WHITE);



    delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main`  >>2222
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   //rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   //floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   //rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   //floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);



    delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>3333
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   //rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   //floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   //rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   //floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);



    delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>4444
  // rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   //floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

  // rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   //floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   //rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
  // floodfill(midx, midy+170,WHITE);



    delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>5555
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   //rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   //floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   //rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   //floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);



    delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>6666
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

  // rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   //floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);



    delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>7777
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   //rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   //floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

  // rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   //floodfill(midx, midy,WHITE);

  // rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   //floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

  // rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   //floodfill(midx, midy+170,WHITE);



    delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>8888
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);



    delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>9999
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   //rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   //floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);

    delay(1000);
   graphdefaults();
   cleardevice();

   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main           >>0000
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   //rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   //floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);

   delay(2000);
   cleardevice();

   delay(1000);
   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>8888
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);

   delay(500);
   cleardevice();

   delay(500);
   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>8888
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);
  
   delay(500);
   cleardevice();

   delay(500);
   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>8888
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);
  
  
   delay(500);
   cleardevice();

   delay(500);
   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   setfillstyle(SOLID_FILL,RED);
   rectangle(midx-120,midy-200,midx+120,midy+200); //main  >>8888
   rectangle(midx-80, midy-180,midx+80,midy-160);  //top seg
   floodfill(midx, midy-170,WHITE);

   rectangle(midx-100, midy-150,midx-80,midy-20);  //top L seg
   floodfill(midx-90, midy-80,WHITE);

   rectangle(midx+80, midy-150,midx+100,midy-20);  //top R seg
   floodfill(midx+90, midy-80,WHITE);

   rectangle(midx-70, midy-10,midx+70,midy+10);  //Center
   floodfill(midx, midy,WHITE);

   rectangle(midx-100, midy+20,midx-80,midy+150);  //bot L Seg
   floodfill(midx-90, midy+80,WHITE);

   rectangle(midx+80, midy+20,midx+100,midy+150);  //bot R seg
   floodfill(midx+90, midy+80,WHITE);

   rectangle(midx-80, midy+160,midx+80,midy+180);  //bottom seg
   floodfill(midx, midy+170,WHITE);




   delay(3000);
   cleardevice();
   setcolor(WHITE);
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
   outtextxy(midx-160, midy, "Thats All...Thank You!! :)");
   outtextxy(midx-160, midy+100, "Enter any key to exit");

   getch();
}
