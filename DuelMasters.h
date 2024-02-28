#pragma once
#include "CardGame.h"
class DuelMasters : public CardGame {
public:
	DuelMasters();

	~DuelMasters() override;

	void Attack() override;

private:
};


