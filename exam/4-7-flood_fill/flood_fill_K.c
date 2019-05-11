#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;


void 	recurs(char **tab, int H, int W, int x, int y, char Match){

	printf("At [%d][%d]\nLimt[%d][%d]\n", y, x, H, W);
	if(x < 0 || y < 0 || x >= W || y >= H)
		return ;

	if(tab[y][x] == Match || tab[y][x] == ' '){

		if(tab[y][x] == Match)
			tab[y][x] = 'F';
	//printf("At [%d][%d] = %c\n", y, x, tab[y][x]);
		recurs(tab, H, W, x + 1, y, Match);
		recurs(tab, H, W, x - 1, y, Match);
		recurs(tab, H, W, x, y + 1, Match);
		recurs(tab, H, W, x, y - 1, Match);
	}
	return ;
}

void 	flood_fill(char **tab, t_point size, t_point begin){

	if(tab == NULL)
		return ;

	if(begin.x < 0 || begin.y < 0 || begin.y >= size.y || begin.x >= size.x)
		return ;

	char C = (char)malloc(sizeof(char));
	C = tab[begin.y][begin.x];
	//printf("Starting Recursion\n");
	//printf("We are matching [%c]\n", C);
	//printf("Size[%d]x[%d]\n", size.y, size.x);
	recurs(tab, size.y, size.x, begin.x, begin.y, C);

}

void print_tab(char **s){

	int i = 0;
	int j = 0;
	while(s[i]){
		j = 0;
		while(s[i][j]){
			write(1, &s[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

char **make_area(char **zone){

	char **tab;
	
	int i = 0;
	int j = 0;
	int H = 0;
	int W = 0;
	while(zone[H][W])
		W++;
	while(zone[H])
		H++;

	tab = (char **)malloc(sizeof(char *) * (H + 1));
	tab[H] = NULL;
	while(tab[i]){

		j = 0;
		tab[i] = (char *)malloc(sizeof(char) * (W + 1));
		while (j < W){
			tab[i][j] = zone[i][j];
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	return tab;
}
