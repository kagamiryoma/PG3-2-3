#include "DuelMasters.h"
#include <stdio.h>
DuelMasters::DuelMasters() 
{
	name = "デュエマ";
	printf("ボルメテウスホワイトドラゴン\n");
}

DuelMasters::~DuelMasters()
{
	printf("ボルメテウスホワイトドラゴンは倒れた\n");
}

void DuelMasters::Attack()
{
	printf("ボルメテウス・ホワイト・フレア\n");
}
