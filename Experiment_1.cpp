/*

#include"graphics.h"
#include<iostream>
#include<Windows.h>

using namespace std;

void draw(int, int, int, int, int, int);
void translation(int[][3], int[][3]);
void main()
{	
	int gd = DETECT, gm, x1, y1, x2, y2, x3, y3, tx, ty;
	initgraph(&gd, &gm, "d:\\tc\\bgi");
	cout << "enter coordinate for first vertex of triangle:";
	cin >> x1 >> y1;
	cout << "enter for second vertex:";
	cin >> x2 >> y2;
	cout << "enter for third :";
	cin >> x3 >> y3;
	draw(x1, y1, x2, y2, x3, y3);
	int object[4][3] = { {x1,y1,1},
				{x2,y2,1},
				{x3,y3,1},
				{x1,y1,1}
	};
	cout << "\n enter x translation factor:";
	cin >> tx;
	cout << "\n y translation factor";
	cin >> ty;
	int translate[3][3] = {
				{1,0,0},
				{0,1,0},
				{tx,ty,1}
	};
	translation(object, translate);

	system("PAUSE");
	closegraph();
}
void draw(int x1, int y1, int x2, int y2, int x3, int y3)
{
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x3, y3, x1, y1);
}
void translation(int object[][3], int translate[][3])
{
	int c[4][3];
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k <= 2; k++)
			{
				c[i][j] = c[i][j] + object[i][k] * translate[k][j];
			}
		}
	}

	draw(c[0][0], c[0][1], c[1][0], c[1][1], c[2][0], c[2][1]);
}

*/