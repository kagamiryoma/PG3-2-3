#pragma once
#include "CardGame.h"
class YuGiOh : public CardGame {
public:

	YuGiOh();

	~YuGiOh() override;

	void Attack() override;

private:
};


