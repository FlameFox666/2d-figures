#pragma once

namespace Area2D 
{
	// Представляє геометричну фігуру — багатокутник, представлений
	// від п'яти координат та більше. Містить методи для обчислення  
	// периметру та площі опуклих багатокутників.
	class Ngon 
	{
		Ngon();

		Ngon(
			const std::string& name, 
			const Coords* coords
		);


	};

}
