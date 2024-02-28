#pragma once
class CardGame
{
public:
	CardGame();

	virtual ~CardGame();

	virtual void Attack();

protected:

	const char* name;
};

