//#include"graphics.h"
//#include<iostream>
//#include<Windows.h>
//
//using namespace std;
//
//void draw(int x1, int y1, int x2, int y2, int x3, int y3)
//{
//	line(x1, y1, x2, y2);
//	line(x2, y2, x3, y3);
//	line(x3, y3, x1, y1);
//}
//
//void scale(int object[][2], int scale[][2]) {
//
//	int c[4][2];
//
//	for (int i = 0; i <= 3; i++)
//	{
//		for (int j = 0; j <= 1; j++)
//		{
//			c[i][j] = 0;
//			for (int k = 0; k <= 1; k++)
//			{
//				c[i][j] = c[i][j] + object[i][k] * scale[k][j];
//			}
//		}
//	}
//
//	//Center the triangle?
//
//	draw(c[0][0], c[0][1], c[1][0], c[1][1], c[2][1], c[2][0]);
//
//}
//
//void centroid(int object[][2]) {
//	int c[2];
//	c[0] = (object[0][0] + object[1][0] + object[2][0]) / 3;
//	c[1] = (object[0][1] + object[1][1] + object[2][1]) / 3;
//	cout << c[0] << " " << c[1] << endl;
//}
//
//void main()
//{
//	int gd = DETECT, gm, x1, y1, x2, y2, x3, y3, sx, sy;
//	initgraph(&gd, &gm, "d:\\tc\\bgi");
//	
//	
//	cout << "Ridheesh Amarthya A505112518005 CG Experiment 2: Scaling \n\n";
//	
//	cout << "Enter coordinate for first vertex of triangle:";
//	cin >> x1 >> y1;
//	cout << "Enter coordinate for second vertex of triangle:";
//	cin >> x2 >> y2;
//	cout << "Enter coordinate for third vertex of triangle:";
//	cin >> x3 >> y3;
//	
//	draw(x1, y1, x2, y2, x3, y3);
//
//	int object[4][2] = {
//			{x1,y1},
//			{x2,y2},
//			{x3,y3},
//			{x1,y1}
//	};
//
//	centroid(object);
//
//	cout << "\n Enter x Scale factor:";
//	cin >> sx;
//	cout << "\n Enter y Scale factor";
//	cin >> sy;
//
//
//	int s[2][2] = {
//		{0, sx},
//		{sy, 0}
//	};
//
//	scale(object, s);
//
//	system("PAUSE");
//	closegraph();
//}
//


//Boundary Fill program

//#include<stdio.h>
//#include"graphics.h""
//#include<math.h>
//
//void boundary(int, int, int, int);
//void main()
//{
//	int gd = DETECT, gm, oldcolor;
//	initgraph(&gd, &gm, "d:\\TC\\BGI");
//	//setcolor(WHITE);
//	//line(120,120,200,120);
//	//line(200,120,200,170);
//	//line(200,170,120,170);
//	//line(120,170,120,120);
//	//boundary(150,150,MAGENTA,WHITE);
//	//rectangle(120,120,200,170);
//	//boundary(150,150,MAGENTA,WHITE);
//	circle(320, 240, 40);
//	boundary(320, 240, GREEN, WHITE);
//
//}
//void boundary(int xc, int yc, int fill, int bcolor)
//{
//
//	if (getpixel(xc, yc) != bcolor && getpixel(xc, yc) != fill)
//	{
//		putpixel(xc, yc, fill);
//		boundary(xc + 1, yc, fill, bcolor);
//		boundary(xc - 1, yc, fill, bcolor);
//
//		boundary(xc, yc + 1, fill, bcolor);
//		delay(50);
//		//boundary(xc,yc-1,fill,bcolor);
//	}
//}

#include"graphics.h"
#include<iostream>
#include<math.h>

using namespace std;

void draw(float[][2]);
void rotation(float[][2], float[][2]);
void main()
{
	int gd = DETECT, gm, x1, y1, x2, y2, x3, y3;
	float theta, a1, a2, a3;
	initgraph(&gd, &gm, "d:\\tc\\bgi");
	cout << "\n\nRidheesh Amarthya A505112518005\n\n";
	cout << "enter coordinate for first vertex of triangle:";
	cin >> x1 >> y1;
	cout << "enter for second vertex:";
	cin >> x2 >> y2;
	cout << "enter for third :";
	cin >> x3 >> y3;

	float object[][2] = { {x1,y1},
				{x2,y2},
				{x3,y3} };

	draw(object);
	cout << "\n enter rotation angle:";
	cin >> theta;
	theta = theta * (3.14 / 180);
	a1 = cos(theta);
	a2 = -sin(theta);
	a3 = sin(theta);
	float rotate[][2] = {
				{a1,a3},
				{a2,a1},

	};
	rotation(object, rotate);
	getch();
	closegraph();
}
void draw(float m[][2])
{
	line(m[0][0], m[0][1], m[1][0], m[1][1]);
	line(m[1][0], m[1][1], m[2][0], m[2][1]);
	line(m[2][0], m[2][1], m[0][0], m[0][1]);
}
void rotation(float object[][2], float rotate[][2])
{
	float c[3][2];
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k <= 1; k++)
			{
				c[i][j] = c[i][j] + object[i][k] * rotate[k][j];

			}

		}

	}
	draw(c);
}
