#include <stdio.h>
#include "DuelMasters.h"
#include "YuGiOh.h"
#include "CardGame.h"

int main()
{
	CardGame* card_game[3];

	for (int i = 0; i < 2; i++) {
		if(i < 1)
			card_game[i] = new YuGiOh;
		else
		{
			card_game[i] = new DuelMasters;
		}
	}

	for (int i = 0; i < 2; i++) {
		card_game[i]->Attack();
	}

	for (int i = 0; i < 2; i++) {
		delete card_game[i];
	}
	return 0;
}