#include "YuGiOh.h"
#include <stdio.h>

YuGiOh::YuGiOh()
{
	name = "遊戯王";
	printf("青眼の白龍\n");
}

YuGiOh::~YuGiOh()
{
	printf("青眼の白龍は去って行った\n");
}

void YuGiOh::Attack()
{
	printf("滅びのバーストストリーム\n");
}
